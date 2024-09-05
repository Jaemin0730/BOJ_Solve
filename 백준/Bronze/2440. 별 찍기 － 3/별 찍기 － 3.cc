#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;
	scanf("%d", &num);

	for (int j = 0; j < num; j++) {
		for (int i = num - j; i > 0; i--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}