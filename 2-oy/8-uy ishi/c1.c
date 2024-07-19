#include <stdio.h>

int main() {
    int n = 3, m = 3;
    int sum, val = 1;

    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < m; j++) {
            sum += val;
            if (j < m - 1) {
                printf("%d+", val);
            } else {
                printf("%d", val);
            }
            val++;
        }
        printf("=%d\n", sum);
    }


}
