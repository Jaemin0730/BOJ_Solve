#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;
	int max;
	int min;
	int bs[2000000];

	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		scanf("%d", &bs[i]);

	}
	
	max = bs[0];
	min = bs[0];

	for (int j = 1; j < num; j++) {
		if (bs[j] > max) {
			max = bs[j];
		}
		if (bs[j] < min) {
			min = bs[j];
		}
	}
	printf("%d %d", min, max);

	return 0;
}