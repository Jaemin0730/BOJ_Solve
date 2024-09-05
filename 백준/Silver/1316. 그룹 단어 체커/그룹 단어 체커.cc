#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#pragma warning(disable : 4996)

/*
	문자열 -> 아스키 코드 사용
	memset()함수 사용법 배우기!
*/

int main() {
	int n;
	scanf("%d", &n);

	char arr[100];
	int alpha[26];
	int count = 0;
	bool group;

	for (int i = 0; i < n; i++) {
		memset(alpha, 0, sizeof(alpha));
		// 반복문이 돌때마다 알파벳 배열 전부 0으로 초기화!!

		group = true;
		// 참 거짓을 사용하는 이유 -> 여러 문자열이 나오는데,
		// 내가 원하는 문자열인지 확인하기 위해서이다!!
		

		scanf("%s", arr);			// 문자열 받아주기(i번째)
		alpha[arr[0] - 'a'] = 1;	
		// 아스키코드 사용해서 첫번째 문자열에 해당하는 알파벳에 +1 해준다


		for (int j = 1; j < strlen(arr); j++) {	// 문자열 반복문 돌리기

			if (alpha[arr[j] - 'a'] == 0) alpha[arr[j] - 'a'] = 1;
			// 알파벳의 배열 첫 등장하는 문자일 경우 -> 1

			else {	// 알파벳의 배열에서 이미 등장하는 경우
				if (arr[j] == arr[j - 1]) continue;
				// 직전 알파벳과 일치하면 계속 고고

				else group = false;
				// 직전 알파벳과 일치하지 않으면 그룹단어 X
			}
		}
		if (group) count++;
	}
	printf("%d\n", count);
	return 0;
}