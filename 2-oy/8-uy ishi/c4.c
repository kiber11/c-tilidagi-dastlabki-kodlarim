#include <stdio.h>

int main() {
    int n = 3, m = 3;
    int sum1,sum2,sum3, val;

    // 1-qatordagi qiymatlar va yig'indisi
    sum1 = 0;
    val = 1;
    for (int j = 0; j < m; j++) {
        if (j == 0) val = 1;
        else if (j == 1) val = 0;
        else val = 0;
        sum1 += val;
        if (j < m - 1) {
            printf("%d+", val);
        } else {
            printf("%d", val);
        }
    }
    printf("\n");

    // 2-qatordagi qiymatlar va yig'indisi
    sum2 = 0;
    val = 0;
    for (int j = 0; j < m; j++) {
        if (j == 0) val = 0;
        else if (j == 1) val = 3;
        else val = 0;
        sum2 += val;
        if (j < m - 1) {
            printf("%d+", val);
        } else {
            printf("%d", val);
        }
    }
    printf("\n" );

    // 3-qatordagi qiymatlar va yig'indisi
    sum3 = 0;
    val = 0;
    for (int j = 0; j < m; j++) {
        if (j == 0) val = 0;
        else if (j == 1) val = 0;
        else val = 5;
        sum3 += val;
        if (j < m - 1) {
            printf("%d+", val);
        } else {
            printf("%d", val);
        }
    }
    printf("\n");
    printf("S=%d",sum1+sum2+sum3);



}

