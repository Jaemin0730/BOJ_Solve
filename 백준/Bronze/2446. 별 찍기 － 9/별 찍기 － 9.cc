#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int a = n * 2 - 1;
	int b = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < b; j++) {
			cout << " ";
		}

		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		cout << "\n";
		a -= 2;
		b++;
	}
	a += 4;
	b -= 2;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < b; j++) {
			cout << " ";
		}

		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		cout << "\n";
		a += 2;
		b--;
	}
	return 0;
}