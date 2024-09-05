#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;
	scanf("%d", &num);

	char sp;
	int count = 0;

	char alp[100];
	for (int i = 0; i < num; i++) {
		scanf(" %c", &sp);
		alp[i] = sp;
	}

	for (int i = 0; i < num; i++) {
		count += alp[i] - 64;
	}


	printf("%d", count);
	return 0;
}