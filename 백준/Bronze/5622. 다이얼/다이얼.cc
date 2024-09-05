#include <stdio.h>
#pragma warning(disable : 4996)

/*
	A - 65
	
*/

int main() {
	int count = 0;
	char ph[16];
	scanf("%s", ph);
	int time[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	for (int i = 0; ph[i] != NULL; i++) {
		count += time[ph[i] - 'A'];
	}

	printf("%d\n", count);
	return 0;
}