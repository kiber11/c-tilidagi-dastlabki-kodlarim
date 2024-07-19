#include <stdio.h>

int main() {
    int n;
    double product = 1.0;

    printf("n sonini kiriting: ");
    scanf("%d", &n);

    if (n > 0) {
        int i = 1;
        do {
            product *= 1.0 + (i / 10.0);
            i++;
        } while (i <= n);

        printf("Ko'paytma: %.2f\n", product);
    } else {
        printf("n musbat son bo'lishi kerak.\n");
    }


}
