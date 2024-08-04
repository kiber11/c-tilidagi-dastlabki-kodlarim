#include <stdio.h>
#include <string.h>

int main() {
    char A[100];
    printf("Matn kiriting:\n");
    gets(A);

    int n = strlen(A);
    char maxSoz[100] = "";
    int maxUzunlik = 0;

    char B[100];
        int j = 0;

    for (int i = 0; i <= n; i++) {
        if (A[i] == ' ' || A[i] == '\0' || A[i]=='.' || A[i]==',') {
           B[j] = '\0';

            int sozUzunligi = strlen(B);

            if (sozUzunligi > maxUzunlik) {
                maxUzunlik = sozUzunligi;
                strcpy(maxSoz, B);
            }

            j = 0;
        } else {
            B[j++] = A[i];
        }
    }

    printf("Eng uzun so'z: %s\n", maxSoz);
    printf("Uzunligi: %d\n", maxUzunlik);

    return 0;
}
