#include <stdio.h>

void ikkilik(int a) {
    int qoldiq = 0, sanoq = 1;
    while (a >= 1) {
        qoldiq = qoldiq + (a % 2) * sanoq;
        a = a / 2;
        sanoq *= 10;
    }
    printf("%d", qoldiq);
}

int main() {
    int a;
    printf("a=");
    scanf("%d", &a);
    ikkilik(a);
    return 0;
}
