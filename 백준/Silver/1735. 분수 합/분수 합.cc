#include <iostream>
using namespace std;
 
int gcd(int x, int y){
    int z = 1;
    while(y != 0){
        z = x % y;
        x = y;
        y = z;
    }
    return x;
}
 
int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d;
    e = a * d + c * b;
    f = b * d;
    int k = gcd(e, f);
    e /= k;
    f /= k;
    cout << e << " " << f;
}