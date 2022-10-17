#include <stdio.h>
#include <windows.h>
#include <random>
#include <time.h>

typedef void(*PFunc)(int*);

//�����_���Œl��Ԃ��֐�
int random(int a) {

	int num;

	//�����V�[�h������
	std::random_device seed_gen;
	//�����Z���k�E�c�C�X�^�[
	std::mt19937_64 engine(seed_gen());
	//�����͈�
	std::uniform_real_distribution<int> typeDist(0, 100);

	num = typeDist(engine);

	//��A�����𔻒f������

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