#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d = a*b-c;
    if(d>=0) {
        printf("%d\n",d);
    } else {
        printf("%d\n",0);
    }
    
    return 0;
}