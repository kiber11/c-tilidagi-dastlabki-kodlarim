#include <stdio.h>

int main() {
    int x, y,i,a=0;
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    for (  i = 1; i <= x ;i=i+y) {
    a++;
    }

    printf("%d ", a-1);


}
