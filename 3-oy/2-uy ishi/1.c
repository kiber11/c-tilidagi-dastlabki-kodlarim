#include <stdio.h>

int main() {
    int n = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Teskari diagonal elementlar: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][n-i-1]);
    }

    return 0;
}
