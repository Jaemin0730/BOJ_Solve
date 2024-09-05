#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int n;
	int num;
	int count = 0;

	scanf("%d", &n);
	// 총 개수

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num == 1) {
			continue;
		}
		int tf = 0;
		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				tf = 1;
				break;
			}
			
		}
		if (tf == 0) {
			count++;
		}
	}

	printf("%d", count);
	return 0;
}