#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int min(int a,int b) {
	if (b == 0) {
		return a;
	}
	else {
		return min(b, a % b);
	}
}

int max(int a, int b) {
	return a * b / min(a, b);
}

int main() {
	int t, a, b;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", max(a, b));
	}
	return 0;
}