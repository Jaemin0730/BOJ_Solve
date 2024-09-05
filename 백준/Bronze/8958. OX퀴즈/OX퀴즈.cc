#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;
	char arr[80];
	int add;
	int count;

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%s", arr);
		add = 1;
		count = 0;

		for (int j = 0; j < strlen(arr); j++) {
			
			if (arr[j] == 'O') {
				count += add;
				add++;
			}
			if (arr[j] == 'X') {
				add = 1;
			}
		}
		printf("%d\n", count);
	}
	
	
	return 0;
}