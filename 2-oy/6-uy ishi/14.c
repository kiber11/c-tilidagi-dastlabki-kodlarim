#include <stdio.h>

int main() {
    int n, sum = 0, odd = 1, i = 1;

    // n ni kiritish
    printf("Butun son n ni kiriting: ");
    scanf("%d", &n);

    // do-while siklidan foydalanib, kvadratni hisoblash
    do {
        sum += odd;
        printf("%d ", sum);
        odd += 2;
        i++;
    } while (i <= n);

    printf("\n%d ning kvadrati = %d\n", n, sum);


}
