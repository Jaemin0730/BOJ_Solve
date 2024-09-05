#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d.", a / b);
	a %= b;
	for (int i = 0; i <= 1000; i++) {
		a *= 10;
		printf("%d", a / b);
		a = a - (a / b) * b;
	}

	return 0;
}