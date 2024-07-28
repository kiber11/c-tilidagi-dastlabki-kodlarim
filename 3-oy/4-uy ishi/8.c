#include <stdio.h>
#include <string.h>

int main() {
    char q1[100], natija[100] = "";
    int N, M;

    printf("Matn kiriting:\n");
    gets(q1);

    printf("N uzunlikdagi so'zlar uzunligini kiriting: ");
    scanf("%d", &N);

    printf("M uzunlikdagi so'zlar uzunligini kiriting: ");
    scanf("%d", &M);

    int uzunlik = strlen(q1);
    char vaqtinchalik[100];
    int j = 0;

    for (int i = 0; i <= uzunlik; i++) {
        if (q1[i] == ' ' || q1[i] == '\0') {
            vaqtinchalik[j] = '\0';


            int sozUzunligi = strlen(vaqtinchalik);


            if (sozUzunligi == N || sozUzunligi == M) {
                strcat(natija, vaqtinchalik);
                strcat(natija, " ");
            }

            j = 0;
        } else {
            vaqtinchalik[j++] = q1[i];
        }
    }

    natija[strlen(natija) - 1] = '\0';

    printf("Natija matn: %s\n", natija);

    return 0;
}

