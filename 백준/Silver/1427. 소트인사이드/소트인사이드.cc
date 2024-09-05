#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main() {
	char list[10];
	char tmp;
	scanf("%s", list);

	for (int i = 0; i < strlen(list); i++) {
		for (int j = 0; j < strlen(list); j++) {
			if (list[j] < list[j + 1]) {
				tmp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = tmp;
			}
		}
	}
	printf("%s", list);
	return 0;
}