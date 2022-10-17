#include <stdio.h>

//�ʏ�̒����̌n
int UsuallySalary(int n) {
	return (n * 1072);
}

//�ċA����
int RecursiveSalary(int n) {

	if (n <= 1) {
		return  1;
	}

	return (2 * RecursiveSalary(n - 1));
}

//�������A�b�v��������̌n
int UpSalary(int n) {
	return (RecursiveSalary(n) * 100) - 50;
}

int main() {

	int n = 8;
	int result;

	result = UsuallySalary(n);
	printf("%d\n", result);

	result = UpSalary(n);
	printf("%d\n", result);

	return 0;
}