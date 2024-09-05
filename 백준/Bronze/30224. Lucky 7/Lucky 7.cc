#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool c = find(s.begin(), s.end(), '7') != s.end();
    bool d = stoi(s) % 7 == 0;

    if(c && d) cout << 3;
    else if(c && !d) cout << 2;
    else if(not(c) && d) cout << 1;
    else cout << 0;
}