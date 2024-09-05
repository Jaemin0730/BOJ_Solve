#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

/*
	

*/
void reverse(char arr[]) {
	for (int i = 0; i < strlen(arr) / 2; i++) {
		char temp = arr[i];
		arr[i] = arr[strlen(arr) - i - 1];
		arr[strlen(arr) - i - 1] = temp;
	}
}


int main() {
	char a[1000000] = { 0, };
	char b[1000000] = { 0, };
	char result[10001] = { 0, };
	int up = 0;
	// 자리수 올림
	int len = 0;
	scanf("%s %s", &a, &b);
	
	reverse(a);
	reverse(b);

	if (strlen(a) > strlen(b)) {
		len = strlen(a);
	}
	else {
		len = strlen(b);
	}

	for (int i = 0; i < len; i++) {
		int sum = a[i] - '0' + b[i] - '0' + up;
		if (sum < 0) {
			sum += '0';
		}
		
		if (sum > 9) {
			up = 1;
		}
		else {
			up = 0;
		}
		result[i] = sum % 10 + '0';			// ??? 약간 이부분 이해가 잘 안간다ㅠㅠ
	}

	if (up == 1) {
		result[len] = '1';
		// 올림의 느낌이니까 맨 마지막에 1을 추가로 넣어줌!!ㅎㅎ
	}
	reverse(result);
	printf("%s", result);

	return 0;
}