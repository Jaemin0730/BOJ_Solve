#include <iostream>
using namespace std;

int main() {
    int t, d = 0;
    for (int i = 0; i < 10; i++) {
        cin >> t;
        if (t == 1) { 
            d = (d + 1) % 4;
        } else if (t == 2) { 
            d = (d + 2) % 4;
        } else if (t == 3) { 
            d = (d + 3) % 4;
        }
    }
    if (d == 0) { 
        cout << "N";
    } else if (d == 1) { 
        cout << "E";
    } else if (d == 2) { 
        cout << "S";
    } else if (d == 3) { 
        cout << "W";
    }
}