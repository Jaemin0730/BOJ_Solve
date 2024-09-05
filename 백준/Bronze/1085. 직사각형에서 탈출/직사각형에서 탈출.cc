#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int a = w - x;
	int b = x - 0;
	int c = y - 0;
	int d = h - y;

	int arr[] = { a,b,c,d };
	int min = arr[0];
	for (int i = 0; i < 4; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	printf("%d", min);
	return 0;
}