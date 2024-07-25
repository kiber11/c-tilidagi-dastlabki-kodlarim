#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("n =");
    scanf("%d",&n);

    int A[n][n];
    srand(time(0));


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 30;
        }
    }

    printf("Asl matritsa:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < n; i++) {
        for (int j = n - i; j < n; j++) {
            A[i][j] = 0;
        }
    }


    printf("\nO'zgartirilgan  matritsa:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }


}

