#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;
	scanf("%d", &num);

	int space = num-1;
	int star = 1;


	for (int i = 0; i < num - 1; i++) {
		for (int j = space; j > 0; j--) {
			printf(" ");
		}
		for (int k = star; k > 0; k--) {
			printf("*");
		}
		space--;
		star += 2;
		printf("\n");
	}

	for (int i = 0; i < num; i++) {
		for (int j = space; j > 0; j--) {
			printf(" ");
		}
		for (int k = star; k > 0; k--) {
			printf("*");
		}
		space++;
		star -= 2;
		printf("\n");
	}

	printf("\n");

	
	
	return 0;
}