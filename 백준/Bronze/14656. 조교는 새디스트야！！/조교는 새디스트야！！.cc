#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;
	int line;
	int count = 0;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		scanf("%d", &line);
		if (line != i) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}