#include <stdio.h>

//�ʏ�̒����̌n
int UsuallySalary(int n) {
	return (n * 1072);
}

//�������A�b�v��������̌n
int UpSalary(int n) {

	if (n == 1) {
		//�ŏ���1���Ԃ�100�~
		return 100;
	}
	else {
		//2���Ԗڈȍ~��[�O��1���Ԃł����������*2-50]
		return 2 * UpSalary(n - 1) - 50;
	}

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

		//�ċA�I�Ȓ����̌n
		result = UpSalary(i);
		printf("  �ċA�I�Ȓ����̌n : %d\n", result);
	}

	return 0;
}