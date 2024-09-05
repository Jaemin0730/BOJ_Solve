#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

constexpr int MOD = 1e9 + 7;

using Matrix = array<array<int, 2>, 2>;

Matrix Mul(const Matrix& a, const Matrix& b) {
	Matrix ret{};
	for (int i = 0; i < a.size(); i++) for (int j = 0; j < b[0].size(); j++) {
		for (int k = 0; k < a[0].size(); k++)
			ret[i][j] = (ret[i][j] + 1LL * a[i][k] * b[k][j]) % MOD;
	}
	return ret;
}

Matrix Pow(Matrix x, int n) {
	Matrix ret{}; ret[0][0] = ret[1][1] = 1;
	for (; n; n >>= 1) {
		if (n & 1) ret = Mul(ret, x);
		x = Mul(x, x);
	}
	return ret;
}

int main() {
	fastio;
	int n; cin >> n;
	Matrix M = { 1, 1, 1, 0 };
	M = Pow(M, n);
	cout << M[1][0] << ' ' << n - 2 << '\n';
}