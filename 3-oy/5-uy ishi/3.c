#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char matn[100];
    char A[100];
    gets(matn);
    int j = 0;
    char C[100][100];
    int indexC = 0;

    // So'zlarni ajratish
    for (int i = 0; matn[i] != '\0'; i++) {
        if (matn[i] == ' ' || matn[i] == '.' || matn[i] == ',') {
            if (j != 0) {
                A[j] = '\0';
                strcpy(C[indexC], A);
                indexC++;
                j = 0;
            }
        } else {
            A[j++] = matn[i];
        }
    }

    if (j != 0) {
        A[j] = '\0';
        strcpy(C[indexC], A);
        indexC++;
    }


    for (int i = 0; i < indexC; i++) {
        if (strcmp(C[i], "ashi") != 0 && strcmp(C[i], "anaqa") != 0 && strcmp(C[i], "manaqa") != 0) {
            printf("%s\n", C[i]);
        }
    }

    return 0;
}
