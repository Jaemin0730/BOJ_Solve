#include <bits/stdc++.h>
using namespace std;

int cow[11];
int n, s;

int main(){
    memset(cow,-1,sizeof(cow));
    cin >> n;
    
    while(n--) {
        int a, b;
        cin >> a >> b;
        if(cow[a] != -1 && cow[a] != b) s++;
        cow[a] = b;
    }
    cout << s;
}