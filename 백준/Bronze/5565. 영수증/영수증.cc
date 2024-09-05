#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int result;
	int sum = 0;
	int num;

	scanf("%d", &result);
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num);
		sum += num;
	}
	int fin = result - sum;
	printf("%d", fin);
	return 0;
}