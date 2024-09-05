#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;
	scanf("%d", &num);
	int result = 1;
	
	for (int i = num; i>0; i--) {
		result *= i;
	}
	printf("%d", result);
	return 0;
}