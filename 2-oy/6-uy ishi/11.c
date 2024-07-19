#include <stdio.h>
#include <math.h>

int main() {
    int n;
    long  sum = 0;

    printf("n sonini kiriting: ");
    scanf("%d", &n);

    if (n > 0) {
        int i = 0;
        do {
            sum += pow(n + i, 3);
            i++;
        } while (i <= n);
        printf("Yig'indi: %ld\n", sum);
    } else {
        printf("n musbat son bo'lishi kerak.\n");
    }


}

