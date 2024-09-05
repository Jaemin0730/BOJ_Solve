#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	int num;	// 대입하는 숫자
	int A;		// 십의 자리 숫자
	int B;		// 일의 자리 숫자
	int C;		// 십의 자리 + 일의 자리 숫자
	int D;		// B + C
	int result;
	int n = 0;

	scanf("%d", &num);
	result = num;

	while (1) {
		A = num / 10;
		B = num % 10;
		C = (A + B) % 10;
		D = (10 * B) + C;
		num = D;
		n++;

		if (D == result) {
			break;
		}
	}
	
	printf("%d\n", n);
	return 0;
}