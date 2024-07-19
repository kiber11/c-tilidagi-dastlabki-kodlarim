#include <stdio.h>

int main() {
    int n = 3; // Qatorlar soni
    int m = 3; // Ustunlar soni
    int num = 2; // Boshlang'ich son

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Tub sonni topish
            int isPrime = 0;
            while (!isPrime) {
                isPrime = 1; // Faraz qilishicha tub
                for (int k = 2; k * k <= num; k++) {
                    if (num % k == 0) {
                        isPrime = 0; // Tub emas
                        break;
                    }
                }
                if (!isPrime) {
                    num++;
                }

            }
            printf("%d\t", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
