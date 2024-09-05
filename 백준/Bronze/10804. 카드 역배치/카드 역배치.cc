#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int a, b;
	int card[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int temp;
	
	for (int k = 0; k < 10; k++) {
		scanf("%d %d", &a, &b);

		int count = 1;
		for (int i = a; i <= (a + b) / 2; i++) {	// a-1 <=???<= b-1
			temp = card[i - 1];
			card[i - 1] = card[b - count];
			card[b - count] = temp;
			count++;
		}
	}

	for (int k = 0; k < 20; k++) {
		printf("%d ", card[k]);
	}

	return 0;
}