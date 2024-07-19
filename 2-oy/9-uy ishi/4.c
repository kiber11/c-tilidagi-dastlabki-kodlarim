#include <stdio.h>


void tubson(int N) {
    for (int i = 2; i <= N; i++) {
        int tub = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                tub = 0;
                break;
            }
        }
        if (tub) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int N;
    printf("N=");
    scanf("%d", &N);
    tubson(N);
    return 0;
}
