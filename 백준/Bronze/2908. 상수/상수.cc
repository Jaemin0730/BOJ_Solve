#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

/*
	
*/

int main() {
	char num1[1000];
	char num2[1000];

	scanf("%s %s", num1, num2);
	/*
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	*/

	int temp1;
	temp1 = num1[0];
	int temp2;
	temp2 = num2[0];

	for (int i = 0; i < 3; i++) {
		num1[i] = num1[3 - (i + 1)];
		if (i == 2) {
			num1[2] = temp1;
		}
	}

	for (int i = 0; i < 3; i++) {
		num2[i] = num2[3 - (i + 1)];
		if (i == 2) {
			num2[2] = temp2;
		}
	}

	int n1, n2;

	n1 = atoi(num1);
	n2 = atoi(num2);

	if (n1 > n2) {
		printf("%d\n", n1);
	}
	else {
		printf("%d\n", n2);
	}
	

	return 0;
}