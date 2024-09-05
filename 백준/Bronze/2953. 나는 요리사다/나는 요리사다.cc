#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {

	int point[5] = { 0, };

	int num;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &num);
			point[i] += num;
		}
	}
	
	int max = point[0];
	int mn = 0;
	for (int i = 0; i < 5; i++) {
		if (max < point[i]) {
			max = point[i];
			mn = i;
		}
	}
	printf("%d %d\n", mn + 1, max);
	return 0;
}