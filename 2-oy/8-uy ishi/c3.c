#include <stdio.h>

int main() {
    int n = 3, m = 3;
    int val;

    // 1-qatordagi qiymatlar
    for (int j = 0; j < m; j++) {
        if (j == 0) val = 1;
        else if (j == 1) val = 6;
        else val = 11;
        printf("%d ", val);
    }
    printf("\n");

    // 2-qatordagi qiymatlar
    for (int j = 0; j < m; j++) {
        if (j == 0) val = 16;
        else if (j == 1) val = 21;
        else val = 26;
        printf("%d ", val);
    }
    printf("\n");

    // 3-qatordagi qiymatlar
    for (int j = 0; j < m; j++) {
        if (j == 0) val = 31;
        else if (j == 1) val = 36;
        else val = 41;
        printf("%d ", val);
    }
    printf("\n");


}
