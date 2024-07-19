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
    k--;

    printf("Kvadrati n dan katta bo'lmagan eng katta butun son k: %d\n", k);


}
