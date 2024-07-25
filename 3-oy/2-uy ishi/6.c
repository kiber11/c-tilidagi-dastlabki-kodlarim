#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);

    int A[n][n];
    srand(time(0));

   printf("Asosiy ko'rinishi\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 30;
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
printf("\n");

    for (int i = 0; i < n; i++) {
        int temp = A[i][i];
        A[i][i] = A[i][n-i-1];
        A[i][n-i-1] = temp;
    }


    printf("Almashtirilgan matritsa:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }


}
