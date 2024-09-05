#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int a[5]; // M, O, B, I, S

int main() {
    string n;
    cin >> n;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] == 'M') a[0]++;
        if (n[i] == 'O') a[1]++;
        if (n[i] == 'B') a[2]++;
        if (n[i] == 'I') a[3]++;
        if (n[i] == 'S') a[4]++;
    }
    for (int i = 0; i < 5; i++) {
        if (a[i] == 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}