#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int t;
string a, b;

string isOk(){
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return "ERROR\n";
    }
    return "OK\n";
}

int main(void)
{
    u;
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << isOk();
    }
}