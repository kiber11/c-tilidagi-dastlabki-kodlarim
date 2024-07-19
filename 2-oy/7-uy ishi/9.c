#include <stdio.h>

int main() {
    int n;
    printf("Natural sonni kiriting (n > 1): ");
    scanf("%d", &n);

    int s = 0;
    int k = 0;
    for (int i = 1; i <= n; i++) {
        s += i * i;
        if (s <= n) {
            k = i;
        } else {
            break;
        }
    }

    printf("Eng katta butun k: %d\n", k);

}

