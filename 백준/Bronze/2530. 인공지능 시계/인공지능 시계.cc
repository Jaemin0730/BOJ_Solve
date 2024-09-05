#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int num;
	scanf("%d", &num);

	c += num;
	b += c / 60;
	c %= 60;

	a += b / 60;
	b %= 60;
	a %= 24;
	printf("%d %d %d", a, b, c);

	return 0;
}