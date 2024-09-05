#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

vector <int> list;
void crr(long long int n) {
	if (n != 1) {
		crr(n / 2);
	}
	else {
		cout << n % 2;
		return;
	}
	//list.push_back(n % 2);
	cout << n % 2;
}

int main() {
	long long int n;
	cin >> n;
	crr(n);
	/*
	sort(list.begin(), list.end());
	int i = 0;
	while (!list.empty()) {
		cout << list[i];
		i++;
	}
	*/
	return 0;
}