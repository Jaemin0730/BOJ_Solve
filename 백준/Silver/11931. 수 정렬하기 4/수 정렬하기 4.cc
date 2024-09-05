#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int num;	// 줄의 개수
	int tmp;	// 오름차순으로 정렬할 숫자들!
	vector<int> v;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), greater<int>());
	for (int i = 0; i < num; i++) {
		cout << v[i] << '\n';
	}

	return 0;
}