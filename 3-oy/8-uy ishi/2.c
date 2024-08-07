#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dublikat(int **arr, int n, int m) {
    int count[11] = {0};


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("s= %d ",count[arr[i][j]]);
            count[arr[i][j]]++;

        }
    }


    printf("Output: ");
    for (int i = 0; i <= 10; i++) {
        if (count[i] >= 2) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n = 3, m = 3;

    int **arr = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(m * sizeof(int));
    }

    srand(time(0));
    printf("Input: n=%d\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 11;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


   dublikat(arr, n, m);

    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}

