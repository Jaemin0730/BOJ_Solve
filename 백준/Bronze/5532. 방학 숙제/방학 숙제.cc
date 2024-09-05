#include <stdio.h>
 
int main()
{
    int L, A, B, C, D;
    int kday, mday;
 
    scanf("%d %d %d %d %d",&L, &A, &B, &C, &D);
 
    if (A % C != 0) {
        kday = (A / C) + 1;
    }
    else {
        kday = (A / C);
    }
    if (B % D != 0) {
        mday = (B / D) + 1;
    }
    else {
        mday = (B / D);
    }
 
    if (kday >= mday) {
        printf("%d", L - kday);
    }
    else if (kday < mday) {
        printf("%d", L - mday);
    }
    
    return 0;
}


