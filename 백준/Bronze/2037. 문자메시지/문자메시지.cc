#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    u
    int p, w;
	int number = 1, idx = 0, sol = 0;
	char s[1001];

	cin >> p >> w;
	cin.get();
	cin.getline(s, 1000, '\n');

	while (s[idx] != '\0') {
		if (s[idx] == 'A' || s[idx] == 'B' || s[idx] == 'C') {
			if (number == 2) {
				sol += w;
			}
			if (s[idx] == 'A') {
				sol += p;
			}else if(s[idx] == 'B') {
				sol += p * 2;
			}else if (s[idx] == 'C') {
				sol += p * 3;
			}
			number = 2;
		}
        else if (s[idx] == 'D' || s[idx] == 'E' || s[idx] == 'F') {
			if (number == 3) {
				sol += w;
			}
			if (s[idx] == 'D') {
				sol += p;
			}
			else if (s[idx] == 'E') {
				sol += p * 2;
			}
			else if (s[idx] == 'F') {
				sol += p * 3;
			}
			number = 3;
		}
        else if (s[idx] == 'G' || s[idx] == 'H' || s[idx] == 'I') {
			if (number == 4) {
				sol += w;
			}
			if (s[idx] == 'G') {
				sol += p;
			}
			else if (s[idx] == 'H') {
				sol += p * 2;
			}
			else if (s[idx] == 'I') {
				sol += p * 3;
			}
			number = 4;
		}
        else if (s[idx] == 'J' || s[idx] == 'K' || s[idx] == 'L') {
			if (number == 5) {
				sol += w;
			}
			if (s[idx] == 'J') {
				sol += p;
			}
			else if (s[idx] == 'K') {
				sol += p * 2;
			}
			else if (s[idx] == 'L') {
				sol += p * 3;
			}
			number = 5;
		}
        else if (s[idx] == 'M' || s[idx] == 'N' || s[idx] == 'O') {
			if (number == 6) {
				sol += w;
			}
			if (s[idx] == 'M') {
				sol += p;
			}
			else if (s[idx] == 'N') {
				sol += p * 2;
			}
			else if (s[idx] == 'O') {
				sol += p * 3;
			}
			number = 6;
		}
        else if (s[idx] == 'P' || s[idx] == 'Q' || s[idx] == 'R'|| s[idx] == 'S') {
			if (number == 7) {
				sol += w;
			}
			if (s[idx] == 'P') {
				sol += p;
			}
			else if (s[idx] == 'Q') {
				sol += p * 2;
			}
			else if (s[idx] == 'R') {
				sol += p * 3;
			}
			else if (s[idx] == 'S') {
				sol += p * 4;
			}
			number = 7;
		}
        else if (s[idx] == 'T' || s[idx] == 'U' || s[idx] == 'V') {
			if (number == 8) {
				sol += w;
			}
			if (s[idx] == 'T') {
				sol += p;
			}
			else if (s[idx] == 'U') {
				sol += p * 2;
			}
			else if (s[idx] == 'V') {
				sol += p * 3;
			}
			number = 8;
		}
		else if (s[idx] == 'W' || s[idx] == 'X' || s[idx] == 'Y' || s[idx] == 'Z') {
			if (number == 9) {
				sol += w;
			}
			if (s[idx] == 'W') {
				sol += p;
			}
			else if (s[idx] == 'X') {
				sol += p * 2;
			}
			else if (s[idx] == 'Y') {
				sol += p * 3;
			}
			else if (s[idx] == 'Z') {
				sol += p * 4;
			}
			number = 9;
		}
		else {
			sol += p;
			number = 1;
		}

		idx++;
	}

	cout << sol;
}