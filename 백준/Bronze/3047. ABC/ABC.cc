#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int main(void)
{
    u;
    vector<int> v(3);
    for (int i = 0; i < 3; i++) {
        cin
>> v[i];
    }
    sort(v.begin(), v.end());
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        cout << v[s[i] - 'A'] << " ";
    }
}