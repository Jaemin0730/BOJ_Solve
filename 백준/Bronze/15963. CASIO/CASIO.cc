#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
	long long n;
	long long m;

	scanf("%Lf %Lf", &n, &m);
	if (n == m) {
		printf("1");
	}
	else {
		printf("0");
	}
	return 0;
}