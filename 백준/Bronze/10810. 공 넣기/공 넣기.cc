#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int n, m;
	int baguni[100] = { 0, };
	int num1, num2, num;
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &num1, &num2, &num);
		for (int j = num1; j <= num2; j++) {
			baguni[j-1] = num;
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", baguni[i]);
	}
	return 0;
}