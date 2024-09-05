#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int n;
	scanf("%d", &n);

	int a = 0;
	int b = 1;
	int result = a+b;
	for (int i = 0; i < n - 2; i++) {
		a = b;
		b = result;
		result = a + b;
	}
	if (n == 0) {
		printf("0\n");
	}
	else if (n == 1) {
		printf("1\n");
	}
	else {
		printf("%d\n", result);
	}
	
	return 0;
}