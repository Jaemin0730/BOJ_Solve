#include <stdio.h>
#pragma warning(disable : 4996)

/*
	배-0	, 등-1
	도 - 1111
	개 - 1100
	걸 - 1000
	윷 - 0000
	모 - 1111

*/

int main() {
	int k;
	int arr1[4];
	int arr2[4];
	int arr3[4];
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;


	for (int i = 0; i < 4; i++) {
		scanf("%d", &k);
		arr1[i] = k;
		if (arr1[i] == 1) {
			count1++;
		}
	}

	if (count1 == 3) {
		printf("A\n");
	}
	else if (count1 == 2) {
		printf("B\n");
	}
	else if (count1 == 1) {
		printf("C\n");
	}
	else if (count1 == 0) {
		printf("D\n");
	}
	else if (count1 == 4) {
		printf("E\n");
	}
	//-----------------------------------


	for (int i = 0; i < 4; i++) {
		scanf("%d", &k);
		arr2[i] = k;
		if (arr2[i] == 1) {
			count2++;
		}
	}

	if (count2 == 3) {
		printf("A\n");
	}
	else if (count2 == 2) {
		printf("B\n");
	}
	else if (count2 == 1) {
		printf("C\n");
	}
	else if (count2 == 0) {
		printf("D\n");
	}
	else if (count2 == 4) {
		printf("E\n");
	}
	//---------------------------------



	for (int i = 0; i < 4; i++) {
		scanf("%d", &k);
		arr3[i] = k;
		if (arr3[i] == 1) {
			count3++;
		}
	}

	if (count3 == 3) {
		printf("A\n");
	}
	else if (count3 == 2) {
		printf("B\n");
	}
	else if (count3 == 1) {
		printf("C\n");
	}
	else if (count3 == 0) {
		printf("D\n");
	}
	else if (count3 == 4) {
		printf("E\n");
	}
	return 0;
}