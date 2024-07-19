#include <stdio.h>

int main() {
    int a, b, c;
    printf("Iltimos, a, b va c sonlarini kiriting: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0) {
        printf("Natija: 2\n"); // 3 ta son ham juft
    } else if (a % 2 != 0 && b % 2 != 0 && c % 2 != 0) {
        printf("Natija: 1\n"); // 3 ta son ham toq
    } else if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0) {
        printf("Natija: 3\n"); // xohlagan bittasi juft
    } else {
        printf("Natija: 0\n"); // shartlarni qanoatlantirmasa
    }

    return 0;
}

