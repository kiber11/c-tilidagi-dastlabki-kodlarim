#include <stdio.h>
#include <stdlib.h>

void baholarniTahlilQilish(int **baholar, int talabalarSoni, int fanlarSoni) {

    int sanash[fanlarSoni][6];

printf("\n");
    for (int i = 0; i < fanlarSoni; i++) {
        for (int j = 2; j <= 5; j++) {
            sanash[i][j] = 0;
            printf("% d ",sanash[i][j]);
        }
        printf("\n");
    }


    for (int j = 0; j < fanlarSoni; j++) {
        for (int i = 0; i < talabalarSoni; i++) {
            sanash[j][baholar[i][j]]++;
            printf("% d ", sanash[j][baholar[i][j]]);
        }
        printf("\n");
    }


    for (int j = 0; j < fanlarSoni; j++) {
        printf("%d-fandan:\n", j + 1);
        for (int k = 5; k >= 2; k--) {
            printf("%d - %d ta;\n", k, sanash[j][k]);
        }
    }
}

int main() {
    int talabalarSoni=3 , fanlarSoni=4 ;

    int **baholar = (int **)malloc(talabalarSoni * sizeof(int *));
    for (int i = 0; i < talabalarSoni; i++) {
        baholar[i] = (int *)malloc(fanlarSoni * sizeof(int));
    }


    int malumot[3][4] = {
        {4, 2, 3, 5},
        {4, 5, 3, 2},
        {2, 3, 4, 3}
    };

    for (int i = 0; i < talabalarSoni; i++) {
        for (int j = 0; j < fanlarSoni; j++) {
            baholar[i][j] = malumot[i][j];
            printf(" %d ",baholar[i][j]);
        }
        printf("\n");
    }


    baholarniTahlilQilish(baholar, talabalarSoni, fanlarSoni);


    for (int i = 0; i < talabalarSoni; i++) {
        free(baholar[i]);
    }
    free(baholar);

    return 0;
}
