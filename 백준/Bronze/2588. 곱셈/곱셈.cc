#include <stdio.h>

int main(void) {
  int A;
  int B;
  int result1;
  int result2;
  int result3;
  int result;

  scanf("%d\n%d",&A,&B);
  result1 = A*((B%100)%10);
  result2 = A*((B%100)/10);
  result3 = A*(B/100);
  result = A*B;
  printf("%d\n%d\n%d\n%d",result1,result2,result3,result);
  return 0;
}