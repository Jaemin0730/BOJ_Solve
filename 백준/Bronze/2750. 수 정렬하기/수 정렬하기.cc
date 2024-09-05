#include <stdio.h>
#pragma warning(disable : 4996)

/*

*/

int main() {
	int num;
	int n;
	scanf("%d", &num);

	int sort[1000] = { 0, };
	int save = 0;

	for (int i = 0; i < num; i++) {
		scanf("%d", &n);
		sort[i] = n;
	}

	for (int k = 0; k < num; k++) {
		for (int i = 0; i < num; i++) {
			for (int j = i + 1; j < num; j++) {
				if (sort[i] > sort[i + 1]) {
					save = sort[i + 1];
					sort[i + 1] = sort[i];
					sort[i] = save;
				}
			}
		}
	}

	for (int i = 0; i < num; i++) {
		printf("%d\n", sort[i]);
	}
	return 0;
}