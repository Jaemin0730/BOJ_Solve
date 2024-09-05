#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	int m, n;
	scanf("%d %d", &m, &n);

	int num = 1;
	int sum = 0;
	int min = 0;
	
	
	for (int i = m; i <= n; i++) {
		int tf = 0;
		if (i == 1) {
			continue;
		}
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				tf = 1;
				break;
			}
		}
		if (tf == 0) {
			if (sum == 0) {
				min = i;
			}
			sum += i;
		}
	}

	

	if (sum == 0) {
		printf("-1");
	}
	else {
		printf("%d\n%d", sum, min);
	}
	
	return 0;
}