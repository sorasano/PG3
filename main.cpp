#include <stdio.h>
#include <windows.h>
#include <random>
#include <time.h>
#include <functional>

typedef void (*PFunc)(int);

//�R�[���o�b�N�֐�
void Judge(int input) {

	//�����_��
	int num;
	num = rand() % 6 + 1;

	if (num % 2 == input) {
		printf("����\n");
	}
	else {
		printf("�s����\n");
	}

	printf("�o���ڂ�'%d'�ł���\n", num);

}

int main() {


	//����
	printf("0:���� 1:�\n");
	int input;
	scanf_s("%d", &input);

	//�R�[���o�b�N�֐�

	PFunc p;
	p = Judge;

	std::function<void(PFunc, int)>setTimeout = [=](PFunc p, int second) {
		
		//3�b��~��ɔ��f
		printf("���f��\n");
		Sleep(1000 * second);
		p(input);

	};

	setTimeout(p,3);

	return 0;
}