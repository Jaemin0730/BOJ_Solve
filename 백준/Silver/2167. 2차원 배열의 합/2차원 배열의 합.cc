#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n, m;
	int num;
	cin >> n >> m;
	int list[301][301];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> num;
			list[i][j] = num;
		}
	}
	// 배열의 값들 저장완료!

	int k;
	cin >> k;
	int i, j, x, y;
	for (int a = 0; a < k; a++) {
		cin >> i >> j >> x >> y;
		int sum = 0;

		if (i == x && j == y) {
			cout << list[i][j] << "\n";
		}
		else if (i == x && j != y) {
			for (int k = j; k <= y; k++) {
				sum += list[i][k];
			}
			cout << sum << "\n";
		}
		else if (i != x && j == y) {
			for (int k = i; k <= x; k++) {
				sum += list[k][j];
			}
			cout << sum << "\n";
		}
		else if (i != x && j != y) {
			for (int p = i; p <= x; p++) {
				for (int q = j; q <= y; q++) {
					sum += list[p][q];
				}
			}
			cout << sum << "\n";
		}
	}
	return 0;
}