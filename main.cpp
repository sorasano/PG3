#include <stdio.h>
#include <windows.h>
#include <random>
#include <time.h>
#include <functional>

typedef void (*PFunc)(int num, int input);

//��~
void Wait(PFunc p, int second, int num, int input) {

	Sleep(second);

	p(num, input);

}

int main() {

	//�����_��
	int num;
	num = rand() % 100;

	//����
	printf("0:���� 1:�\n");
	int input;
	scanf_s("%d", &input);

	//�R�[���o�b�N�֐�

	auto p = [=](int num, int input) {
		if (num % 2 == input) {
			printf("����\n");
		}
		else {
			printf("�s����\n");
		}
	};

	//3�b��~��ɔ��f
	printf("���f��\n");
	Wait(p, 3000, num, input);

	return 0;
}