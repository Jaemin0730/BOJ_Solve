#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	int n;
	int x, y;
	scanf("%d", &n);

	int list[50][3];
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		list[i][0] = x;
		list[i][1] = y;
	}

	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (list[i][0] < list[j][0] && list[i][1] < list[j][1]) {
				count++;
			}
		}
		list[i][2] = count + 1;
		count = 0;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", list[i][2]);
	}

	return 0;
}