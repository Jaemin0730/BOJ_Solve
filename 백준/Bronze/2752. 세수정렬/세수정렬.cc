#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (b > c) {
			printf("%d %d %d", c, b, a);
		}
		else {	// c>b
			if (a > c) {	//a c b
				printf("%d %d %d", b, c, a);
			}
			else { // c>a >b
				printf("%d %d %d", b, a, c);
			}
		}
		
	}
	else {	// b>a
		if (a > c) {
			printf("%d %d %d", c, a, b);
		}
		else {	// c>a
			if (c > b) {	// c b a
				printf("%d %d %d", a, b, c);
			}
			else {	// b>c bca
				printf("%d %d %d", a, c, b);
			}
		}
	}
	return 0;
}