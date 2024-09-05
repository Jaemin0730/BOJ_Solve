#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int arr[8][8];

  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      char star;
      cin>>star;
      arr[i][j]=star;
    }
  }

  int count=0;
  for(int i=0;i<8;i++){
    if(i==0||i==2||i==4||i==6){
      for(int j=0;j<8;j++){
        if(j==0||j==2||j==4||j==6){
          if(arr[i][j]=='F'){
            count++;
          }
        }
      }
    }
  }

  for(int i=0;i<8;i++){
    if(i==1||i==3||i==5||i==7){
      for(int j=0;j<8;j++){
        if(j==1||j==3||j==5||j==7){
          if(arr[i][j]=='F'){
            count++;
          }
        }
      }
    }
  }
  
  cout<<count;
	return 0;
}