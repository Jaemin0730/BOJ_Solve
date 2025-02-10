#include <iostream>
#include <string>
using namespace std;



int main() {
	int a; 
    string s;
	cin >> a >> s;
	for (int i = 1; i < a; i++) {
		if (s[i] == 'J') cout << s[i - 1] << '\n';
	}
}