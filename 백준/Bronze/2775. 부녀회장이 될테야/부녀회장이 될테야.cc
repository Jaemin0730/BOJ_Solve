#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int arr[15][15] = { 0, };
	// 14호까지 있는데 0부터 시작이니까 15까지 배열 만들어준다!
	int num, k, n;

	scanf("%d", &num);

	for (int i = 0; i < 15; i++) {
		arr[0][i] = i;
	}

	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j-1];
			// arr[1][2] = arr[0][2] + arr[1][1]
		}
	}

	for (int i = 0; i < num; i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", arr[k][n]);
	}

	return 0;
}