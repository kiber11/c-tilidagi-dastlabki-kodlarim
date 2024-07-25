#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, m;
    printf("n =");
    scanf("%d",&n);
    printf("m =");
    scanf("%d",&m);

    int A[n][m];
    srand(time(0));


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = rand() % 30;
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }


    for (int j = 0; j< m; j++) {
        int max = A[0][j];
        for (int i = 0; i < n; i++) {
            if (A[i][j] > max) {
                max = A[i][j];
            }
        }
        printf("ustun %d uchun eng katta element: %d\n", j + 1, max);
    }


}
