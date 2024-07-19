#include <stdio.h>

int main() {
    int n = 4;  // Qatorlar soni
    int m = 3;  // Ustunlar soni
    int num = 1;  // Boshlang'ich son

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {  // Juft qatorlar
            for (int j = 0; j < m; j++) {
                printf("%d\t", num++);
            }
        } else {  // Toq qatorlar
            int end = num + m - 1;
            for (int j = 0; j < m; j++) {
                printf("%d\t", end--);
                num++;
            }
        }
        printf("\n");
    }
    return 0;
}
