#include <stdio.h>

int main() {
    int n;
    printf("n sonini kiriting: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("n soni 1 dan katta bo'lishi kerak (n > 1).\n");
        return 1;
    }

    int k;
    int daraja = 1;

    for (k = 0; daraja <= n; k++) {
        daraja *= 3;
    }

    printf("3^k > n shartini qanoatlantiruvchi eng kichik butun son k: %d\n", k);


}

