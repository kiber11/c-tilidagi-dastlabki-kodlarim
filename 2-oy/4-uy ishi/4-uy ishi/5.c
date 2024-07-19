#include <stdio.h>

int main() {
    int A, B;
    int amal;
    printf("Iltimos, A va B sonlarini kiriting: ");
    scanf("%d %d", &A, &B);
    printf("Amalni tanlang:\n");
    printf("1 - Qo'shish\n");
    printf("2 - Ayirish\n");
    printf("3 - Bo'lish\n");
    printf("4 - Ko'paytirish\n");
    scanf("%d", &amal);
    switch (amal) {
        case 1:
            printf("A + B = %d\n", A + B);
            break;
        case 2:
            printf("A - B = %d\n", A - B);
            break;
        case 3:
            if (B != 0) {
                printf("A / B = %.2f\n", (float) A / B);
            } else {
                printf("Nolga bo'lish mumkin emas!\n");
            }
            break;
        case 4:
            printf("A * B = %d\n", A * B);
            break;
        default:
            printf("Noto'g'ri amal tanlandi!\n");
    }


}
