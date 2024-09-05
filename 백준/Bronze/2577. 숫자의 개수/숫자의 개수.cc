#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	int result = A * B * C;
	int arr[10] = { 0, };

	while (result > 0) {
		arr[result % 10]++;
		result /= 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	

	return 0;
}