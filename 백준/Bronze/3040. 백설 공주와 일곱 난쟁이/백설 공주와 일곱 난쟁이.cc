#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int k;
	int sum = 0;
	int s;
	int v;
	int cute[9] = { 0, };

	for (int i = 0; i < 9; i++) {
		scanf("%d", &k);
		cute[i] = k;
	}

	for (int i = 0; i < 9; i++) {
		sum += cute[i];
	}

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - (cute[i] + cute[j]) == 100) {
				s = i;
				v = j;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		if (i == s || i == v) {
			continue;
		}
		printf("%d\n", cute[i]);
	}
	return 0;
}