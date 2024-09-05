#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;			// 넣는 숫자ㅎ
	cin >> n;	

	int name = 0;	// 이름 맞추기!
	int count = 0;	// 숫자 카운트
	int temp;		// 빈 슬롯

	while (count != n) {
		name++;
		temp = name;

		while (temp != 0) {
			if (temp % 1000 == 666) {
				count++;
				break;
			}
			else {
				temp /= 10;
			}
		}
	}
	cout << name;

	return 0;
}