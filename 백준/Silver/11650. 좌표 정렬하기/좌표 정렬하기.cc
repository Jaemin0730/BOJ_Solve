#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int num;
	cin >> num;
	int x, y;
	vector<pair<int, int>>v;
	for (int i = 0; i < num; i++) {
		cin >> x >> y;
		v.push_back({x,y});
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < num; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}

	return 0;
}