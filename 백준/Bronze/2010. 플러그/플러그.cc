#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int n;
	int plg;
	int count = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &plg);
		count += plg;
	}

	printf("%d", count - (n - 1));
	return 0;
}