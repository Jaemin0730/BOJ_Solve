#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
  
  int n,m;
  cin>>n>>m;
  
  if(m==1||m==2) {
     cout<<"NEWBIE!";
  }
  else if(m<=n) {
     cout<<"OLDBIE!";
  }
  else {
     cout<<"TLE!";
  }
	return 0;
}