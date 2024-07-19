#include <stdio.h>

int main() {
    int a;
    int sum,i;

    printf("a ni kiriting: ");
    scanf("%d", &a);

    for ( i = 1; i <= a; i += 2) {
        sum += i;
    }

    printf("0 dan %d gacha bo'lgan toq sonlar yig'indisi: %d\n", a, sum);


}
