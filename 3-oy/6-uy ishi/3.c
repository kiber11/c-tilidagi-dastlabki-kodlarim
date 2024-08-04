#include <stdio.h>


int EKUB(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return EKUB(b, a % b);
    }
}

int main() {
    int a, b;

    printf("Birinchi sonni kiriting: ");
    scanf("%d", &a);
    printf("Ikkinchi sonni kiriting: ");
    scanf("%d", &b);

    int natija = EKUB(a, b);
    printf("Natija: %d\n", natija);

    return 0;
}

