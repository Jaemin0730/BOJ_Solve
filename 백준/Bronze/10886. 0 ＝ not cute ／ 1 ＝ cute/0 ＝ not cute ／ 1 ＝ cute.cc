#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int n;
  cin>>n;
  int good=0;
  int bad=0;

  for(int i=0;i<n;i++){
    int num;
    cin>>num;
    if(num==0){
      bad++;
    }
    else if(num==1){
      good++;
    }
  }

  if(good>=bad){
    cout<<"Junhee is cute!";
  }
  else{
    cout<< "Junhee is not cute!";
  }
	return 0;
}