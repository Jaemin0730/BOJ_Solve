#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;
	int count = 0;
	scanf("%d", &num);

	while (1) {
		if (num % 5 == 0) {
			count += num / 5;
			break;
		}
		else {
			if (num < 3) {
				count = -1;
				break;
			}
			else {
				num -= 3;
				count++;
			}
		}
	}
	printf("%d", count);

	return 0;
}