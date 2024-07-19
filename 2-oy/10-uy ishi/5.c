#include <stdio.h>

int main() {
    int A[8] = {1,
     2, 3, 4, 5, 6, 7, 8};
    int n, B[9];
    printf("n=");
    scanf("%d", &n);


    for (int i = 0; i < 8; i++) {
        B[i] = A[i];
    }

    B[8] = n;


    for (int i = 0; i < 9; i++) {
        printf("B[%d]=%d\n", i, B[i]);
    }

    return 0;
}
