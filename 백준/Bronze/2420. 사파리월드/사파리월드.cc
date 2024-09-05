#include<iostream>
using namespace std;
 
int main() {
    
    long long n,m;
    
    cin >> n >> m;
    
    long long result;
    
    if(n > m) {
        result = n - m;
    }
    else{ 
        result = -n + m;
    }
    
    cout << result;
    
}
