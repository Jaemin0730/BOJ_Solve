#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		if (i > 0) {
			for (int k = 1; k <= i; k++) {
				printf(" ");
			}
			for (int j = num - i; j > 0; j--) {
				printf("*");
			}
			printf("\n");
		}
		else {
			for (int j = num - i; j > 0; j--) {
				printf("*");
			}
			printf("\n");
		}
		
	}
	return 0;
}