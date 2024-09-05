#include <stdio.h>

int main(void) {
  int x;

  scanf("%d", &x);

  if(90<=x&&x<=100) printf("A");
  else if(80<=x&&x<90) printf("B");
  else if(70<=x&&x<80) printf("C");
  else if(60<=x&&x<70) printf("D");
  else printf("F");
  
  return 0;
}