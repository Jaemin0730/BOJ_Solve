#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;
	scanf("%d", &num);
	int h, w, n;

	for (int i = 0; i < num; i++) {
		scanf("%d %d %d", &h, &w, &n);
	
		int fl = n % h;
		int ho = n / h + 1;

		if (fl == 0) {
			fl = h;
			ho = n / h;
		}

		if (ho < 10) {
			printf("%d%02d\n", fl, ho);
		}
		else {
			printf("%d%02d\n", fl, ho);
		}

	}
	return 0;
}