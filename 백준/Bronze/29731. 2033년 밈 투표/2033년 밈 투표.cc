#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main(void)
{
    string c[7] = { "Never gonna give you up","Never gonna let you down","Never gonna run around and desert you","Never gonna make you cry","Never gonna say goodbye","Never gonna tell a lie and hurt you","Never gonna stop" };
    ll t, i;
    string s;

    cin >> t; 
    cin.ignore();
    while (t--) {
        getline(cin, s);
        for (i = 0; i < 7; i++)
            if (s == c[i])
                break;
        if (i == 7)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}