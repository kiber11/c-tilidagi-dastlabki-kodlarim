#include <stdio.h>
#include <string.h>

int main() {
    char matn[1000], vaqtinchalik[100], engKopSoz[100];
    int engKopSon = 0;

    printf("Matn kiriting:\n");
    gets(matn);

    int uzunlik = strlen(matn);

    char sozlar[100][100];
    int sozIndeksi = 0, j = 0;

    for (int i = 0; i <= uzunlik; i++) {
        if (matn[i] == ' ' || matn[i] == '\0') {
            vaqtinchalik[j] = '\0';
            strcpy(sozlar[sozIndeksi], vaqtinchalik);
            sozIndeksi++;
            j = 0;
        } else {
            vaqtinchalik[j++] = matn[i];
        }
    }


    for (int i = 0; i < sozIndeksi; i++) {
        int sana = 1;

        for (int j = i + 1; j < sozIndeksi; j++) {
            if (strcmp(sozlar[i], sozlar[j]) == 0) {
                sana++;

                strcpy(sozlar[j], "");
            }
        }


        if (sana > engKopSon) {
            engKopSon = sana;
            strcpy(engKopSoz, sozlar[i]);
        }
    }

    printf("Eng ko'p qatnashgan so'z: %s\n", engKopSoz);
    printf("Uchragan soni: %d\n", engKopSon);

    return 0;
}

