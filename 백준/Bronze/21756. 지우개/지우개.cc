#include <iostream>
#include <algorithm>

using namespace std;

int n;
vector<int> v1,v2;

int main(){
    cin >> n;
    for(int i=1; i<=n; i++) v1.push_back(i);
    
    while (v1.size() != 1) {
        v2.clear();
        for (int i=1; i<v1.size(); i+=2) v2.push_back(v1[i]);
        v1 = v2;
    }
    cout << v1.front();
}