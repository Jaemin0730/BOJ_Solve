#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996)
using namespace std;

int arN[100001];
int arM[100001];

int search(int N, int key) {
    int low = 0;        // 최저
    int high = N - 1;   // 최고
    int mid;            // 중간

    while (low <= high) {
        mid = (low + high) / 2; // 소수점 버림

        if (arN[mid] == key)    
            return 1;
        else if (arN[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return 0;
}

int main() {
    int M, N;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arN[i]);

    scanf("%d", &M);
    for (int i = 0; i < M; i++)
        scanf("%d", &arM[i]);

    sort(arN, arN + N);

    for (int i = 0; i < M; i++) {
        if (search(N, arM[i])) {
            printf("1\n");
        }
        else {
            printf("0\n");
        }            
    }

    return 0;
}

