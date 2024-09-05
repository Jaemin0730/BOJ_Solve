#include <stdio.h>
#pragma warning(disable : 4996)

/*
	%.2f

*/

int main() {
	float a, b, temp;
	scanf("%f", &a);
	temp = a;

	while (1) {
		scanf("%f", &b);
		if (b == 999) {
			break;
		}

		printf("%.2f\n", (float)b - (float)temp);
		temp = b;
	}

	return 0;
}