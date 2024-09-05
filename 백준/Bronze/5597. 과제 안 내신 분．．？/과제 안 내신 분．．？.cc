#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int n;
	int arr[30] = { 0, };

	for (int i = 0; i < 28; i++) {
		scanf("%d", &n);				// 내가 만약에 17을 넣는다
		arr[n-1] = n;					// 17을 arr[16]에다가 넣는다
										// arr[0]이 1이기 때문에!
	}

	for (int i = 0; i < 30; i++) {
		if (arr[i] == 0) {
			printf("%d\n", i + 1);
		}
	}
	return 0;
}