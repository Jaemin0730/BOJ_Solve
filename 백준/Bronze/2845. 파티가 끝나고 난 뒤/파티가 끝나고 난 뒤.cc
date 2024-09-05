#include <stdio.h>

int main() {
    int a, b, people[6];
    int result;
	scanf("%d %d", &a, &b);
	result = a * b;
    
	for (int i = 0; i < 5; i++) {
		scanf("%d", &people[i]);
		printf("%d ", people[i] - result);
	}
    return 0;
}