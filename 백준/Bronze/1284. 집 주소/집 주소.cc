#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int main(void)
{
    u;
    int N;
	while (1) {
		cin >> N;
		int sum = 0;
		if (N == 0){
            return 0;
        }
		while(true){
			if (N % 10 == 1) {
                sum += 2;
            }
			else if (N % 10 == 0) {
                sum += 4;
            }
			else {
                sum += 3;	
            }
			if (N < 10) {
                break;
            }
			N /= 10;
			sum += 1;	
        }
        cout << sum+2 <<"\n";
    }
}