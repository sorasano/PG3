#include <stdio.h>

template <typename T>
T Min(T a, T b) {

	if (a > b) {
		return static_cast<T>(a);
	}
	else if (b > a) {
		return static_cast<T>(b);
	}
	
	return 0;
}

template<>
char Min<char>(char a, char b) {
	return printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ\n");;
}

int main() {

	printf("%d\n",Min<int>(114,514));
	printf("%f\n", Min<float>(1.14f, 5.14f));
	printf("%f\n", Min<double>(11.4, 51.4));

	printf("%c\n", Min<char>(1, 2));

	return 0;
}