#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n;
        cin >> n;
        ll data[n];
        ll sum = 0;
        for(int i=0; i<n; i++) cin >> data[i];
        sort(data, data + n);
        for(int i=0; i<n; i++) {
                sum += data[i] * ( 2 * i - n + 1 );
        }
        cout << sum * 2;
}