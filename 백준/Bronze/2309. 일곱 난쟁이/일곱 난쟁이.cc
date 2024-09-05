#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	int small[9] = { 0, };
	int save[7];
	int kk;
	int over;
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &kk);
		small[i] = kk;
		sum += small[i];
	}
	over = sum - 100;

	int a, b;
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (small[i] + small[j] == over) {
				a = i;
				b = j;
				break;
			}
			
		}
	}

	int k = 0;
	for (int i = 0; i < 9; i++) {
		if (i != a && i != b) {
			save[k] = small[i];
			k++;
		}
	}

	int tmp;
	for (int i = 0; i < 7; i++) {
		for (int j = i + 1; j < 7; j++) {
			if (save[i] > save[j]) {
				tmp = save[i];
				save[i] = save[j];
				save[j] = tmp;
			}
		}
	}

	for (int i = 0; i < 7; i++) {
		printf("%d\n", save[i]);
	}

	return 0;
}