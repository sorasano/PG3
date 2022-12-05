#include <stdio.h>

//通常の賃金体系
int UsuallySalary(int n) {
	return (n * 1072);
}

//時給がアップする賃金体系
int UpSalary(int n, int result) {

	if (n <= 1) {
		return  result;
	}

	result = result * 2 - 50;

	return UpSalary(n - 1, result);
}

int main() {

	//労働時間
	int n = 10;
	//賃金答え
	int result;

	for (int i = 1; i <= n; i++) {

		//時間経過
		printf("%d時間目 : ", i);

		//通常の賃金体系
		result = UsuallySalary(i);
		printf("一般的な賃金体系 : %d", result);

		///再帰的な賃金体系の初期値
		result = 100;

		//再帰的な賃金体系
		result = UpSalary(i, result);
		printf("  再帰的な賃金体系 : %d\n", result);
	}

	return 0;
}