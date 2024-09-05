#include <stdio.h>

int main(void) {
  int N;
  int X;
  int A;

  scanf("%d %d",&N,&X);
  for(int i=0; i<N; i++){
     scanf("%d", &A);

     if(X>A)
        printf("%d ", A);
  }
  return 0;
}