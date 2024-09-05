#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--) {
        ll a, b = 0, c; // a:학생 수 b:총 사탕 수 c:사탕 수
        cin >> a;
        for (int i = 0; i < a; i++) {
            cin >> c;
            b = (b + c) % a;
        }
        if (b % a) cout << "NO\n";
        else cout << "YES\n";
    }
}