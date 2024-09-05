#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int n;
	int sum = 0;
	scanf("%d", &n);
	char arr[100];
	scanf("%s", arr);

	for (int i = 0; i < n; i++) {
		sum += arr[i]-'0';
	}

	printf("%d\n", sum);

	return 0;
}