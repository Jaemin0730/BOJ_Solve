#include <iostream>
#include <set>
using namespace std;

int main()
{
	int n, cnt = 0;
	cin >> n;
	set<string> m;
	string s;
	while (n--) {
		cin >> s;
		if (s == "ENTER") {
			cnt += m.size();
			m.clear();
			continue;
		}
		m.insert(s);
	}
	cnt += m.size();
	cout << cnt;
}