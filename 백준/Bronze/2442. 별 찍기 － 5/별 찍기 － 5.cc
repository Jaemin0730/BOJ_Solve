#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;
	scanf("%d", &num);

	int star = 1;
	int space = num - 1;

	for (int i = 0; i < num; i++) {
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
	return 0;
}