#include <stdio.h>
#pragma warning(disable : 4996)

/*
	

*/

int main() {
    int n;
    scanf("%d", &n);

    int save;
    int use;

    for (int i = 1; i < n; i++) {
        save = i;
        use = i;

        while (use > 0) {
            save += use % 10;
            use /= 10;
        }

        if (save == n) {
            printf("%d", i);
            n = 0;
            break;
        }
    }

    if (n != 0) {
        printf("0");
    }
    
	return 0;
}