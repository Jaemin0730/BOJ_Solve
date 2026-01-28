#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    while(1) {
        string s;
        cin >> s;
        if (s == "end") break;
        // animal, tree, flower, end
        else if (s == "animal") {
            cout << "Panthera tigris" << "\n";
        }
        else if (s == "flower") {
            cout << "Forsythia koreana" << "\n";
        }
        else if (s == "tree") {
            cout << "Pinus densiflora" << "\n";
        }
    }
}