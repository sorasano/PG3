#include <stdio.h>
#include <windows.h>
#include <random>
#include <time.h>

typedef void(*PFunc)(int*);

//ランダムで値を返す関数
int random(int a) {

	int num;

	//乱数シード生成器
	std::random_device seed_gen;
	//メルセンヌ・ツイスター
	std::mt19937_64 engine(seed_gen());
	//乱数範囲
	std::uniform_real_distribution<int> typeDist(0, 100);

	num = typeDist(engine);

	//奇数、偶数を判断し調整

	if (a % 2 == 0) {

		if (num % 2 != 0) {
			num++;
		}

	}
	else {

		if (num % 2 != 1) {
			num++;
		}

	}

	return num;
}

void wait(PFunc p, int second) {

	Sleep(second);
	p(&second);
}

int main() {

	PFunc p;
	p = random(100);
	wait(p,3);

	return 0;
}