#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int k = a % b;
	int p = a;
	int q = b;

	while (1) {
		a = b;
		if (k == 0) {
			break;
		}
		b = k;
		
		k = a % b;
		
	}
	printf("%d\n", b);
	printf("%d\n", (p * q) / b);
	return 0;
}