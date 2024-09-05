#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int n;
	int start = 2;
	int b = 1;
	int end = 1 + b * 6;
	int count = 2;
	scanf("%d", &n);
	if (n == 1) {
		printf("1\n");
		return 0;
	}

	while (1) {
		if (start <= n && n <= end) {
			printf("%d", count);
			break;
		}
			b++;
			start = end + 1;
			end += 6 * b;
			count++;
	}

	
	return 0;
}