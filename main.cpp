#include <stdio.h>

//通常の賃金体系
int UsuallySalary(int n) {
	return (n * 1072);
}

//時給がアップする賃金体系
int UpSalary(int n) {

	if (n == 1) {
		//最初の1時間は100円
		return 100;
	}
	else {
		//2時間目以降は[前の1時間でもらった時給*2-50]
		return 2 * UpSalary(n - 1) - 50;
	}

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

		//再帰的な賃金体系
		result = UpSalary(i);
		printf("  再帰的な賃金体系 : %d\n", result);
	}

	return 0;
}