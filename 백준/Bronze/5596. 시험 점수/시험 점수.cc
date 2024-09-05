#include <stdio.h>

int main() {
    int a1,b1,c1,d1;
    int a2,b2,c2,d2;
    scanf("%d %d %d %d",&a1,&b1,&c1,&d1);    
    scanf("%d %d %d %d",&a2,&b2,&c2,&d2);    
    int result1 = a1 + b1 + c1 + d1;        // 민국
    int result2 = a2 + b2 + c2 + d2;        // 만세
    
    if(result1 >= result2) {
        printf("%d",result1);
    } else {
        printf("%d",result2);
    }
    
    return 0;
}