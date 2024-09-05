#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	char ch;
	
	while (scanf("%c", &ch) != -1) {
		printf("%c", ch);
	}
	return 0;
}