#include <iostream>
#include <string>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
 
    string s1 = to_string(a) + to_string(b); //a+b결합
    string s2 = to_string(c) + to_string(d); //c+d결합
 
    long long n1 = stoll(s1);
    long long n2 = stoll(s2);
 
    cout << n1 + n2 << '\n';
    return 0;
}
