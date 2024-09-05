#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int hansu(int n) {
	int count = 0;

	for (int i = 1; i <= n; i++) {
		if (0 < i && i < 100) {
			count++;
		}
		else if (i < 1000) {
			if (i / 100 - (i / 10) % 10 == (i / 10) % 10 - (i % 100) % 10) {
				count++;
			}
		}
	}

	return count;
}

int main() {
	int num;

	scanf("%d", &num);
	printf("%d\n", hansu(num));
	return 0;
}