#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

/*
	문자열 쓰는 문제답게 아스키 코드를 현명하게 써보자!
	stlen() -> 문자열의 길이를 나타낼 때 사용한다!!!
*/

int main() {
	char word[100];
	int alp[26];
	scanf("%s", word);

	for (int i = 0; i < 26; i++) {
		alp[i] = -1;
	}
	
	for (int i = 97; i <= 122; i++) {				// 알파벳 a~z까지 돌리기(아스키코드)
		for (int j = 0; j < strlen(word); j++) {
			if (word[j] == i) {						// 문장의 글자 하나하나 알파벳과 비교!
				alp[word[j] - 'a'] = j;
				break;
			}
		}
		
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", alp[i]);
	}
	return 0;
}