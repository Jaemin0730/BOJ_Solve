#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	int n;
	scanf("%d", &n);

	long long int a = 0;
	long long int b = 1;
	long long int result = a + b;
	for (int i = 0; i < n - 2; i++) {
		a = b;
		b = result;
		result = a + b;
	}
	
	if (n == 0) {
		printf("0");
	}
	else if (n == 1) {
		printf("1");
	}
	else {
		printf("%lld", result);
	}
	return 0;
}