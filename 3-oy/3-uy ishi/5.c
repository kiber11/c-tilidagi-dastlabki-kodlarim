#include <stdio.h>

int main() {
    int n = 3, m = 4;
    int matrix[3][4] = {
        {4, 2, 3, 5},
        {4, 5, 3, 2},
        {2, 3, 4, 3}
    };


    for (int j = 0; j < m; j++) {
        int count2 = 0, count3 = 0, count4 = 0, count5 = 0;

        for (int i = 0; i < n; i++) {
            if (matrix[i][j] == 2) count2++;
            else if (matrix[i][j] == 3) count3++;
            else if (matrix[i][j] == 4) count4++;
            else if (matrix[i][j] == 5) count5++;
        }

        printf("%d-fandan:\n", j + 1);
        printf("5 - %d ta;\n", count5);
        printf("4 - %d ta;\n", count4);
        printf("3 - %d ta;\n", count3);
        printf("2 - %d ta;\n", count2);
    }
}


