#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int n, index;

    printf("Massiv uzunligini kiriting: ");
    scanf("%d", &n);

    int A[n];

    printf("Massiv elementlarini kiriting:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Indexni kiriting: ");
    scanf("%d", &index);

    if (index >= 0 && index < n) {
        printf("Massivning %d-indexdagi elementi: %d\n", index, A[index]);
    } else {
        printf("0\n");
    }

    return 0;
}
