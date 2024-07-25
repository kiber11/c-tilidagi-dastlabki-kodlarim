#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("n=");
    scanf("%d",&n);

    int A[n][n];
    srand(time(0));


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
               A[i][j] = rand() % 30;
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    int max = A[0][0];
    int count = 0;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
                count = i * n + j ;
            }
        }
    }

    printf("\nEng katta element: %d\n", max);
    printf("Eng katta elementgacha bo'lgan elementlar soni: %d\n", count);


}
