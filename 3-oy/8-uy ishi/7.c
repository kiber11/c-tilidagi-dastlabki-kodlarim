#include <stdio.h>
#include <stdlib.h>

void topTalaba(int *ballar, int n, int m) {
    int *talabaBallari = (int*)calloc(n, sizeof(int));
    int engYaxshiTalaba = 0, engYomonTalaba = 0;

    for (int i = 0; i < n; i++) {
        printf("%d-talaba: ", i + 1);
        for (int j = 0; j < m; j++) {
            talabaBallari[i] += *(ballar + i * m + j);
            printf("%d ", *(ballar + i * m + j));
        }
        printf("=> %d ball\n", talabaBallari[i]);

        if (talabaBallari[i] > talabaBallari[engYaxshiTalaba]) {
            engYaxshiTalaba = i;
        }
        if (talabaBallari[i] < talabaBallari[engYomonTalaba]) {
            engYomonTalaba = i;
        }
    }

    printf("Eng yaxshi o'qigan talaba %d-talaba\n", engYaxshiTalaba + 1);
    printf("Eng yomon o'qigan talaba %d-talaba\n", engYomonTalaba + 1);

    free(talabaBallari);
}

int main() {
    int n = 3, m = 4;
    int ballar[3][4] = {
        {86, 78, 89, 75},
        {58, 90, 93, 82},
        {75, 73, 64, 53}
    };

    topTalaba((int*)ballar, n, m);

    return 0;
}
