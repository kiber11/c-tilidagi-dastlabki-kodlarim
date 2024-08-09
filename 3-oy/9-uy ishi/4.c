#include <stdio.h>
#include <string.h>

int main() {
    FILE *fayl_kirish, *fayl_chiqish;
    char satr[100], birinchi_qism[50], qoldiq[50];
    int takrorlangan_uzunlik = 0;

    fayl_kirish = fopen("1.txt", "r");
    if (fayl_kirish == NULL) {
        printf("Kirish fayli ochilmadi.\n");
        return 1;
    }


    fscanf(fayl_kirish, "%s", satr);
    fclose(fayl_kirish);


    int uzunlik = strlen(satr);


    for (int i = 1; i <= uzunlik / 2; i++) {
        strncpy(birinchi_qism, satr, i);
        birinchi_qism[i] = '\0';

        int is_match = 1;
        for (int j = 0; j < uzunlik; j += i) {
            strncpy(qoldiq, &satr[j], i);
            qoldiq[i] = '\0';
            if (strcmp(birinchi_qism, qoldiq) != 0) {
                is_match = 0;
                break;
            }
        }

        if (is_match) {
            takrorlangan_uzunlik = uzunlik / i;
            break;
        }
    }


    fayl_chiqish = fopen("output.txt", "w");
    if (fayl_chiqish == NULL) {
        printf("Chiqish fayli ochilmadi.\n");
        return 1;
    }


    fprintf(fayl_chiqish, "len=%d\n", takrorlangan_uzunlik);
    fclose(fayl_chiqish);

    printf("Takrorlangan uzunlik output.txt fayliga yozildi.\n");

    return 0;
}

