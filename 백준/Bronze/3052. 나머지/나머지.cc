#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;
	int arr[10];
	int i;
	int n = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &num);
		arr[i] = num % 42;
	}

	for (i = 0; i < 10; i++) {
		int np = 0;
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] == arr[j]) {
				np++;
			}
		}
		if (np == 0) {
			n++;
		}
	}

	printf("%d\n", n);

	return 0;
}