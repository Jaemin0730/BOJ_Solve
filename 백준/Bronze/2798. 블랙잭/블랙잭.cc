#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	// n -> 카드 갯수, m-> 범위

	int list[1000];
	int num;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		list[i] = num;
		// list의 길이는  n임!
	}

	int max = 0;
	int sum = 0;
	int save[100];

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = list[i] + list[j] + list[k];
				if (sum <= m) {
					if (sum >= max) {
						max = sum;
					}
				}
			}
		}
	}
	printf("%d", max);
	return 0;
}