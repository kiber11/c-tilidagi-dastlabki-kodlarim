#include <stdio.h>


void chiqish_Osish(int a, int b) {
    if (a > b) {
        return;
    }
    printf("%d ", a);
    chiqish_Osish(a + 1, b);
}


void chiqish_Kamayish(int a, int b) {
    if (a < b) {
        return;
    }
    printf("%d ", a);
    chiqish_Kamayish(a - 1, b);
}


void chiqish(int a, int b) {
    if (a <= b) {
        chiqish_Osish(a, b);
    } else {
        chiqish_Kamayish(a, b);
    }
}

int main() {
    int a, b;
    printf("A sonini kiriting: ");
    scanf("%d", &a);
    printf("B sonini kiriting: ");
    scanf("%d", &b);

    printf("Output for func(%d, %d): ", a, b);
    chiqish(a, b);
    printf("\n");

    return 0;
}
