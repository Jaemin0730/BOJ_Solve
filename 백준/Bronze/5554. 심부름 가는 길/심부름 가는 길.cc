#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int a, b, c, d;
	int result;
	int min = 0, sec = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	result = a + b + c + d;
	min = result / 60;
	sec = result - (result / 60) * 60;
	printf("%d\n%d\n", min, sec);

	return 0;
}