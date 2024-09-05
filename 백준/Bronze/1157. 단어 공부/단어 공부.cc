#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

/*
	대문자 변환 strupr
	소문자 변환 strlwr
*/

int main() {
	char word[1000000];
	scanf("%s", word);
	int lenn = strlen(word);
	int number;
	int max;
	int k;
	int select = 0;
	int result = 0;
	int alp[26] = { 0, };

	for (int i = 0; i < lenn; i++) {
		if (word[i] >= 'A' && word[i] <= 'Z') {
			number = word[i] - 'A';
			// word[i] - 'A'를 해주면 아스키 코드로 단순 0~25의 값이 나온다.
		}
		else if (word[i] >= 'a' && word[i] <= 'z') {
			number = word[i] - 'a';
			// word[i] - 'a'를 해주면 아스키 코드로 단순 0~25의 값이 나온다.
		}
		alp[number]++;
		// alp가 0~25까지의 칸에 각각의 알파벳 숫자를 가진다.
	}
	// 이를 통해 각 알파벳이 몇번씩 사용되었는지 배열로 저장해준다.

	max = alp[0];

	for (int k = 1; k < 26; k++) {
		if (max < alp[k]) {
			max = alp[k];
			select = k;
			// 가장 자주 사용된 알파벳이 배열에서 어디있는지 
			// select에다가 몇번째에 있는지를 저장해준다.
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max == alp[i]) {
			result++;
			// 중복여부 확인
		}
	}

	if (result > 1) {
		printf("?\n");
	}
	else {
		printf("%c", select + 'A');
	}

	return 0;
}