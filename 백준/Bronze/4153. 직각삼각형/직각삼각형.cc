#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int a, b, c;
	int a2, b2, c2;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0) {
			break;
		}

		a2 = a * a;
		b2 = b * b;
		c2 = c * c;

		if (a2 == b2 + c2 || b2 == a2 + c2 || c2 == a2 + b2) {
			printf("right\n");
		}
		else {
			printf("wrong\n");
		}

	}

	

	return 0;
}