#include <stdio.h>
#include <windows.h>
#include <random>
#include <time.h>
#include <functional>

typedef void (*PFunc)(int);

//コールバック関数
void Judge(int input) {

	//ランダム
	int num;
	num = rand() % 6 + 1;

	if (num % 2 == input) {
		printf("正解\n");
	}
	else {
		printf("不正解\n");
	}

	printf("出た目は'%d'でした\n", num);

}

int main() {


	//入力
	printf("0:偶数 1:奇数\n");
	int input;
	scanf_s("%d", &input);

	//コールバック関数

	PFunc p;
	p = Judge;

	std::function<void(PFunc, int)>setTimeout = [=](PFunc p, int second) {
		
		//3秒停止後に判断
		printf("判断中\n");
		Sleep(1000 * second);
		p(input);

	};

	setTimeout(p,3);

	return 0;
}