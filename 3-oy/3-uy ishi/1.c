#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n,m;
    printf("n=");
    scanf("%d",&n);
    printf("m="); scanf("%d",&m);

   int matritsa[n][m];
    int count[11] = {0};

    srand(time(0));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            matritsa[i][j] = rand() % 11;
            printf("%d ", matritsa[i][j]);
            count[matritsa[i][j]]++;
        }
        printf("\n");
    }


    printf("Natija: ");
    for(int i = 0; i <= 10; i++) {
        if(count[i] >= 2) {
            printf("%d ", i);
        }
    }

    return 0;
}
