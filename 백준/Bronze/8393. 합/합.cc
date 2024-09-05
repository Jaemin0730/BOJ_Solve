#include <stdio.h>

int main(void) {
  int n;
  scanf("%d",&n);

  int a=0;
  for(int i=1; i<= n;i++){
    a += i;
  }
   printf("%d",a);

  return 0;
}