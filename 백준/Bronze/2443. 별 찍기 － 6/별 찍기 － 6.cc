#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;
	scanf("%d", &num);

	int star = num * 2 - 1;
	int space = 0;
	for (int i = 0; i < num; i++) {
		for (int k = space; k > 0; k--) {
			printf(" ");
		}
		for (int j = star; j > 0; j--) {
			printf("*");
		}
		
		star -= 2;
		space++;
		printf("\n");
	}

	return 0;
}