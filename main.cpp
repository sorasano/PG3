#include <stdio.h>

//�ʏ�̒����̌n
int UsuallySalary(int n) {
	return (n * 1072);
}

//�������A�b�v��������̌n
int UpSalary(int n, int result) {

	if (n <= 1) {
		return  result;
	}

	result = result * 2 - 50;

	return UpSalary(n - 1, result);
}

int main() {

	//�J������
	int n = 10;
	//��������
	int result;

	for (int i = 1; i <= n; i++) {

		//���Ԍo��
		printf("%d���Ԗ� : ", i);

		//�ʏ�̒����̌n
		result = UsuallySalary(i);
		printf("��ʓI�Ȓ����̌n : %d", result);

		///�ċA�I�Ȓ����̌n�̏����l
		result = 100;

		//�ċA�I�Ȓ����̌n
		result = UpSalary(i, result);
		printf("  �ċA�I�Ȓ����̌n : %d\n", result);
	}

	return 0;
}