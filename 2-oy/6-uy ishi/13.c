#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("n sonini kiriting: ");
    scanf("%d", &n);

    if (n > 0) {
        int i = 1;
        do {
            double term = 1.0 + (i / 10.0);
            sum += (i % 2 == 0 ? -term : term); // Juft bo'lsa ayiramiz, toq bo'lsa qo'shamiz
            i++;
        } while (i <= n);

        printf("Yig'indi: %.2f\n", sum);
    } else {
        printf("n musbat son bo'lishi kerak.\n");
    }


}
