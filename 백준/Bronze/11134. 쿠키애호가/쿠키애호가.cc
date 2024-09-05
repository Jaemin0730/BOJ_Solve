#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		int c = a % b;
		if (c > 0) {
			cout << 1 + a / b << "\n";
		}
		else {
			cout << a / b << "\n";
		}
	}
}