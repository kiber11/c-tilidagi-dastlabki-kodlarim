#include <stdio.h>

int main() {
    int n,m;
    printf("n=");
    scanf("%d",&n);
    printf("m="); scanf("%d",&m);

    int matritsa[n][n];
    int value = 1;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {

            for (int j = 0; j < n; j++) {
                matritsa[i][j] = value++;
            }
        } else {

            for (int j = n - 1; j >= 0; j--) {
                matritsa[i][j] = value++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matritsa[i][j]);
        }
        printf("\n");
    }


}

