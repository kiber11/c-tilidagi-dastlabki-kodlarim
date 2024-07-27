#include <stdio.h>

int main() {
    int n;
    printf("n =");
    scanf("%d",&n);

    int A[n][n];


    int value = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = value++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


    int B[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            B[j][n - i - 1] = A[i][j];
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


}

