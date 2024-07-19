#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tekshirish(int a, int n) {
    int A[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 100;
        printf("A[%d]=%d\n", i, A[i]);
    }

    for (int i = 0; i < n; i++) {
        if (A[i] == a) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int a, n;
    printf("a=");
    scanf("%d", &a);
    printf("n=");
    scanf("%d", &n);

    if (tekshirish(a, n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
