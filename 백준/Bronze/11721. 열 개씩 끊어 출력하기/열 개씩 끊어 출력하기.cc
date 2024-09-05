#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	char list[100];
	scanf("%s", list);

	printf("%c", list[0]);
	for (int i = 1; i < strlen(list); i++) {
		if (i % 10 == 0) {
			printf("\n");
		}
		printf("%c", list[i]);
	}
	return 0;
}