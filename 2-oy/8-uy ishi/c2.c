#include <stdio.h>

int main() {
    int n = 3, m = 3;
    int sum;
    int val;

    // 1-qatordagi qiymatlar va yig'indisi
    sum = 0;
    val = 1;
    for (int j = 0; j < m; j++) {
        if (j == 0) val = 1;
        else if (j == 1) val = 3;
        else val = 5;
        sum += val;
        if (j < m - 1) {
            printf("%d+", val);
        } else {
            printf("%d", val);
        }
    }
    printf("=%d\n", sum);

    // 2-qatordagi qiymatlar va yig'indisi
    sum = 0;
    val = 2;
    for (int j = 0; j < m; j++) {
        if (j == 0) val = 2;
        else if (j == 1) val = 4;
        else val = 6;
        sum += val;
        if (j < m - 1) {
            printf("%d+", val);
        } else {
            printf("%d", val);
        }
    }
    printf("=%d\n", sum);

    // 3-qatordagi qiymatlar va yig'indisi
    sum = 0;
    val = 7;
    for (int j = 0; j < m; j++) {
        if (j == 0) val = 7;
        else if (j == 1) val = 9;
        else val = 11;
        sum += val;
        if (j < m - 1) {
            printf("%d+", val);
        } else {
            printf("%d", val);
        }
    }
    printf("=%d\n", sum);


}

