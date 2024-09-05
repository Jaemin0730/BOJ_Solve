#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int n;
	int num;
	char ss[20];
	scanf("%d", &n);
	

	for (int k = 0; k < n; k++) {
		scanf("%d", &num);
		scanf("%s", ss);
		for (int i = 0; i < strlen(ss); i++) {
			for (int j = 0; j < num; j++) {
				printf("%c", ss[i]);
			}
		}
		printf("\n");
	}


	return 0;
}