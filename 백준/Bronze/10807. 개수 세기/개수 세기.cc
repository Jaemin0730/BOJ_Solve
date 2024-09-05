#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;
	int n;
	int num2;
	scanf("%d", &num);
	int arr[100];
	for (int i = 0; i < num; i++) {
		scanf("%d", &n);
		arr[i] = n;
	}

	scanf("%d", &num2);
	int count = 0;
	for (int i = 0; i < num; i++) {
		if (arr[i] == num2) {
			count++;
		}
	}

	printf("%d\n", count);
	return 0;
}