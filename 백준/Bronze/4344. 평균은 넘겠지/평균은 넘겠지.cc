#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num,n;
	int score;
	int count;
	int arr[10000];
	int sum;
	float avg;
	float result;
	scanf("%d", &num);
	while (num > 0) {
		scanf("%d", &n);
		sum = 0;
		avg = 0;
		count = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &score);
			arr[i] = score;
			sum += score;
		}
		avg = (float)sum / n;
		for (int i = 0; i < n; i++) {
			if (arr[i] > avg) {
				count++;
			}
		}
		result = (float)count / n;
		printf("%.3f%%\n", result*100);
		num--;
	}

	return 0;
}