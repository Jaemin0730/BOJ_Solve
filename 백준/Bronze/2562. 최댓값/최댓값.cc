#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int arr[9];
	int max = 0;
	int wh;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
			wh = i;
		}
	}


	printf("%d\n", max);
	printf("%d\n", wh+1);

	return 0;
}