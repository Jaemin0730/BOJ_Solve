#include <bits/stdc++.h>
using namespace std;
#define u cin.tie(0)->sync_with_stdio(0)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

stack<int> s;

int main(void)
{
    u;
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        while (!s.empty()) {
            //cout << s.top() << "!\n";
            if (s.top() > num) {
                break;
            }
            s.pop();
        }
        sum += (ll)s.size();
        s.push(num);
    }
    cout << sum;
}