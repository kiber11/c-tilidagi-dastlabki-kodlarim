#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int main() {
    int A[10];
    int *a = A;
    srand(time(NULL));
    int min, max;


    for (int i = 0; i < 10; i++) {
        a[i] = rand() % 20;
        printf("A[%d]=%d\t", i, a[i]);
    }
    printf("\n");

    max = min = a[0];
    for (int i = 1; i < 10; i++) {
        if (max < a[i]) {
            max = a[i];
        }
        if (min > a[i]) {
            min = a[i];
        }
    }


    for (int i = 0; i < 10; i++) {
        if (a[i] == max) {
            a[i] = min;
        } else if (a[i] == min) {
            a[i] = max;
        }
    }


    for (int i = 0; i < 10; i++) {
        printf("A[%d]=%d\t", i, a[i]);
    }
    printf("\n");

    return 0;
}
