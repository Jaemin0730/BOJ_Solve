#include <stdio.h>
#pragma warning(disable : 4996)

/*


*/

int main() {
	int a1, a2, a3;
	int c1, c2, c3;

	scanf("%d %d %d\n%d %d %d", &a1, &a2, &a3, &c1, &c2, &c3);
	printf("%d %d %d\n", c1 - a3, c2 / a2, c3 - a1);
	return 0;
}