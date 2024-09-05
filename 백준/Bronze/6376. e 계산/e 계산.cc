#include <cstdio>

int main(){
    printf("n e\n");
    printf("- -----------\n");
    printf("0 1\n");
    printf("1 2\n");
    printf("2 2.5\n");
    double f = 2;
    double i = 2;
    double r = 2.5;
    while(f < 9){
        f++;
        i *= f;
        r += 1 / i;
        printf("%.0f %.9f\n", f, r);
    }
}