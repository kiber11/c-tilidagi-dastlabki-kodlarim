#include <stdio.h>

int main() {
    int n;
    printf("n sonini kiriting: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n soni natural son bo'lishi kerak (n > 0).\n");
        return 1;
    }

    int k;
    for (k = 1; k * k <= n; k++);

    printf("Kvadrati n dan katta bo'lgan eng kichik butun son k: %d\n", k);


}
