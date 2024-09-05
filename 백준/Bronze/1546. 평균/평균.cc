#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;
	int score;
	int best = 0;
	float avg = 0;
	float arr[1000];
	float result = 0;

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &score);
		arr[i] = score;
		if (best < arr[i]) {
			best = arr[i];
		}
	}

	for (int i = 0; i < num; i++) {
		arr[i] = arr[i] / best * 100;
		avg += arr[i];
	}

	result = (float)avg / num;
	printf("%f\n", result);

	return 0;
}