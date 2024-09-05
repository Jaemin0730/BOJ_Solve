#include <stdio.h>
#pragma warning(disable : 4996)

/*
	와 이걸 이렇게 푼다고?????
	진짜 어나더 레벨 개쩐다,,,,,,,,,,,,,,,,,
*/

int main() {
	int num;
	int arr[8];
	int a = 0;
	int b = 0;
	int c = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &num);
		arr[i] = num;
		if (arr[i] == i + 1) {
			a++;
		}
		else if (arr[i] == 8 - i) {
			b++;
		}
		else {
			c++;
		}
	}

	

	if (a == 8) {
		printf("ascending");
	}
	else if (b == 8) {
		printf("descending");
	}
	else {
		printf("mixed");
	}
	
	return 0;
}