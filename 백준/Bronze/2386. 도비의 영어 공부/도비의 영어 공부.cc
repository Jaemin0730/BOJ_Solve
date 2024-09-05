#include <iostream>
#include <string>
using namespace std;
int main() {
    char c;
    string s;
    while (1) {
        int cnt = 0;
        cin >> c;
        if (c == '#') return 0;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++) {
            if ('A' <= c && c <= 'Z') {
                if (s[i] == c || s[i] == c + 32) cnt++;
            }
            else if ('a'<= c && c <= 'z') {
                if (s[i] == c || s[i] == c - 32) cnt++;
            }
        }
        cout << c << ' ' << cnt << '\n';
    }
}