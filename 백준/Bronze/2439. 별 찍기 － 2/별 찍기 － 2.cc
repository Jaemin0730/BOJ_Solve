#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;
	
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num; j++) {
			if (1 <= j && j <= num - i) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");

	}
	return 0;
}