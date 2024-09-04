#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long x, y;
	
	for(int i = 0; i < t; i++){
		cin >> x >> y;
		double s = y-x; 
		double p = sqrt(s);
		int w = round(sqrt(s));
		if(p <= w) cout << w * 2 - 1 << "\n"; 
		else cout << w * 2 << "\n"; 
	}
}