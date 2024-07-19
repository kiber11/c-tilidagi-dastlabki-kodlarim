#include <stdio.h>

int main() {
    int n;
    int daraja = 1;

    printf("Butun son n ni kiriting: ");
    scanf("%d", &n);

    for (int i = 0; daraja < n; i++) {
        daraja *= 3;
    }

    // Natijani chiqarish
    if (daraja == n) {
        printf("3 ning darajasi\n");
    } else {
        printf("3 ning darajasi emas\n");
    }


}
