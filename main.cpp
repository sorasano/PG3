#include <stdio.h>
#include <windows.h>
#include <random>
#include <time.h>
#include <functional>

typedef void (*PFunc)(int num, int input);

//’â~
void Wait(PFunc p, int second, int num, int input) {

	Sleep(second);

	p(num, input);

}

int main() {

	//ƒ‰ƒ“ƒ_ƒ€
	int num;
	num = rand() % 100;

	//“ü—Í
	printf("0:‹ô” 1:Šï”\n");
	int input;
	scanf_s("%d", &input);

	//ƒR[ƒ‹ƒoƒbƒNŠÖ”

	auto p = [=](int num, int input) {
		if (num % 2 == input) {
			printf("³‰ğ\n");
		}
		else {
			printf("•s³‰ğ\n");
		}
	};

	//3•b’â~Œã‚É”»’f
	printf("”»’f’†\n");
	Wait(p, 3000, num, input);

	return 0;
}