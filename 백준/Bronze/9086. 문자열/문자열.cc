#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n;
	while (n--) {
		cin >> s;
		cout << s[0];
		cout << s[s.size() - 1];
		cout << '\n';
	}

	return 0;
}
