#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(20 <= a && a <= 23) {
		cout << 24 - a + b ;
    }
    else {
        cout << b - a;
    }
}