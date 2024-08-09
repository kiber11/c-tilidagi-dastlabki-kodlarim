#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    FILE *fayl_kirish, *fayl_chiqish;
    char soz[256];
    char eng_uzun[256] = "";
    char eng_qisqa[256] = "";
    int uzunlik, eng_uzun_uzunlik = 0, eng_qisqa_uzunlik = INT_MAX;


    fayl_kirish = fopen("1.txt", "r");
    if (fayl_kirish == NULL) {
        printf("Kirish fayli ochilmadi.\n");
        return 1;
    }


    while (fscanf(fayl_kirish, "%s", soz) == 1) {
        uzunlik = strlen(soz);

        if (uzunlik > eng_uzun_uzunlik) {
            eng_uzun_uzunlik = uzunlik;
            strcpy(eng_uzun, soz);
        }


        if (uzunlik < eng_qisqa_uzunlik) {
            eng_qisqa_uzunlik = uzunlik;
            strcpy(eng_qisqa, soz);
        }
    }


    fclose(fayl_kirish);

    fayl_chiqish = fopen("output.txt", "w");
    if (fayl_chiqish == NULL) {
        printf("Chiqish fayli ochilmadi.\n");
        return 1;
    }

    fprintf(fayl_chiqish, "Eng uzun so'z: %s\n", eng_uzun);
    fprintf(fayl_chiqish, "Eng qisqa so'z: %s\n", eng_qisqa);

    fclose(fayl_chiqish);

    printf("Eng uzun va eng qisqa so'zlar output.txt fayliga yozildi.\n");

    return 0;
}

