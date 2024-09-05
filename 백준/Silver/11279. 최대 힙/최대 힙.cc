#include<stdio.h>
#include<iostream>
#include<queue>
#define mp make_pair
#define pb push_back
#define fst first
#define snd second

using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    priority_queue<int> qqq;
    int num;
    cin >> num;
    while (num--) { 
        int k; 
        cin >> k;

        if (k == 0) { 
            if (qqq.empty()) {
                cout << "0\n";
            }
            else {
                cout << qqq.top() << "\n";
                qqq.pop();
            }
        }
        else { 
            qqq.push(k); 
        }
    }
    return 0;
}