#include <stdio.h>

int main() {
    int n, k = 0;
    int daraja = 1;

    printf("Butun son n ni kiriting: ");
    scanf("%d", &n);


    for (k = 0; daraja < n; k++) {
        daraja *= 2;
    }


    if (daraja == n) {
        printf("n = 2^%d\n", k);
    } else {
        printf("n 2 ning darajasi emas.\n");
    }


}
