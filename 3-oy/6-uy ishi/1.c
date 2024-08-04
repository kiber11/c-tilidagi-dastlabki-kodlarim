#include <stdio.h>


void toq(int n, int x) {
    if (x > n) {
        return;
    }
    if (x % 2 != 0) {
        printf("%d\n", x);
    }
    toq(n, x + 1);
}

int main() {
    int n;
    printf("N sonini kiriting: ");
    scanf("%d", &n);
    toq(n, 1);
    return 0;
}
