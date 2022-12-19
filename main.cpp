#include <stdio.h>

//’Êí‚Ì’À‹à‘ÌŒn
int UsuallySalary(int n) {
	return (n * 1072);
}

//‹‹‚ªƒAƒbƒv‚·‚é’À‹à‘ÌŒn
int UpSalary(int n) {

	if (n == 1) {
		//Å‰‚Ì1ŠÔ‚Í100‰~
		return 100;
	}
	else {
		//2ŠÔ–ÚˆÈ~‚Í[‘O‚Ì1ŠÔ‚Å‚à‚ç‚Á‚½‹‹*2-50]
		return 2 * UpSalary(n - 1) - 50;
	}

}

int main() {


	//˜J“­ŠÔ
	int n = 10;
	//’À‹à“š‚¦
	int result;

	for (int i = 1; i <= n; i++) {

		//ŠÔŒo‰ß
		printf("%dŠÔ–Ú : ", i);

		//’Êí‚Ì’À‹à‘ÌŒn
		result = UsuallySalary(i);
		printf("ˆê”Ê“I‚È’À‹à‘ÌŒn : %d", result);

		//Ä‹A“I‚È’À‹à‘ÌŒn
		result = UpSalary(i);
		printf("  Ä‹A“I‚È’À‹à‘ÌŒn : %d\n", result);
	}

	return 0;
}