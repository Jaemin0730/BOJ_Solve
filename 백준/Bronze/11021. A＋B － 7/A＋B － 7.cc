#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int T;
	int num1,num2;

	scanf("%d", &T);
	for (int i = 1; i <= T; i++) {
		scanf("%d %d", &num1, &num2);
		printf("Case #%d: %d\n", i, num1 + num2);
	}
	return 0;
}