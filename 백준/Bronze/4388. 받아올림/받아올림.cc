#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){;
    while (1){
        ll a, b, sol=0;
        cin >> a >> b;
        if (a==0 && b==0)
            break;
        for (int i=0; a>0 || b>0; a /= 10, b /= 10){
            ll x= a % 10, y = b % 10;
            if (x + y + i > 9){
                sol++;
                i=1;
            }
            else
                i=0;
        }
        cout << sol << "\n";
    }
}