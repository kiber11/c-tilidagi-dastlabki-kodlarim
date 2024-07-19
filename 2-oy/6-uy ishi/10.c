#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("n sonini kiriting: ");
    scanf("%d", &n);

    if (n > 0) {
        int i = 1;
        do {
            sum += 1.0 / i;
            i++;
        } while (i <= n);
        printf("Yig'indi: %.3f\n", sum);
    } else {
        printf("n musbat son bo'lishi kerak.\n");
    }


}
