#include <stdio.h>

int main() {
    int a;
    int sum,i   ;

    printf("a ni kiriting: ");
    scanf("%d", &a);

    for ( i=0;i <= a; i += 2) {
        sum += i;
    }

    printf("0 dan %d gacha bo'lgan juft sonlar yig'indisi: %d\n", a, sum);


}
