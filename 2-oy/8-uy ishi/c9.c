#include <stdio.h>

int main() {
    int n, m;
    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);

    int number = 1;

    for (int k = 0; k <= n + m - 2; k++) {
        for (int i = 0; i < n; i++) {
            int j = k - i;
            if (j >= 0 && j < m) {
                printf("%2d ", number++);
            } else {
                printf("   "); // Bo'sh joy uchun ikki probel
            }
        }
        printf("\n");
    }


}
