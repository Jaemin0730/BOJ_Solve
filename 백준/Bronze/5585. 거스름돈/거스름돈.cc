#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int sum = 1000 - n;
	int count = 0;

	while (1) {
		if (sum - 500 >= 0) {
			count++;
			if (sum - 500 == 0) {
				cout << count;
				break;
			}
			sum -= 500;
		}

		else if (sum - 100 >= 0) {
			count++;
			if (sum - 100 == 0) {
				cout << count;
				break;
			}
			sum -= 100;
		}

		else if (sum - 50 >= 0) {
			count++;
			if (sum - 50 == 0) {
				cout << count;
				break;
			}
			sum -= 50;
		}

		else if (sum - 10 >= 0) {
			count++;
			if (sum - 10 == 0) {
				cout << count;
				break;
			}
			sum -= 10;
		}

		else if (sum - 5 >= 0) {
			count++;
			if (sum - 5 == 0) {
				cout << count;
				break;
			}
			sum -= 5;
		}

		else if (sum - 1 >= 0) {
			count++;
			if (sum - 1 == 0) {
				cout << count;
				break;
			}
			sum -= 1;
		}
	}
	return 0;
}