#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {

	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2) {

		if (num1 > num3) {

			if (num2 > num3) printf("%d", num2);

			else printf("%d", num3);

		}

		else printf("%d", num1);

	}

	else {

		if (num2 > num3) {

			if (num1 > num3) printf("%d", num1);

			else printf("%d", num3);

		}

		else printf("%d", num2);

	}

	return 0;

}