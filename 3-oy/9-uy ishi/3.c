#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fayl_kirish, *fayl_chiqish;
    long uzunlik;
    char *matn;

    // Kirish faylini ochish
    fayl_kirish = fopen("1.txt", "r");
    if (fayl_kirish == NULL) {
        printf("Kirish fayli ochilmadi.\n");
        return 1;
    }

    // Fayl oxiriga o'tib, fayl uzunligini aniqlash
    fseek(fayl_kirish, 0, SEEK_END);
    uzunlik = ftell(fayl_kirish);

    // Fayl boshiga qaytish
    fseek(fayl_kirish, 0, SEEK_SET);

    // Fayldagi matnni o'qish uchun xotira ajratish
    matn = (char*)malloc(uzunlik * sizeof(char));
    if (matn == NULL) {
        printf("Xotira ajratishda xatolik yuz berdi.\n");
        fclose(fayl_kirish);
        return 1;
    }

    // Fayldan matnni o'qish
    fread(matn, sizeof(char), uzunlik, fayl_kirish);

    // Kirish faylini yopish
    fclose(fayl_kirish);

    // Chiqish faylini ochish
    fayl_chiqish = fopen("output.txt", "w");
    if (fayl_chiqish == NULL) {
        printf("Chiqish fayli ochilmadi.\n");
        free(matn);
        return 1;
    }

    // Matnni teskari tartibda chiqish fayliga yozish
    for (long i = uzunlik - 1; i >= 0; i--) {
        fputc(matn[i], fayl_chiqish);
    }

    // Chiqish faylini yopish va xotirani tozalash
    fclose(fayl_chiqish);
    free(matn);

    printf("Matn teskari tartibda output.txt fayliga yozildi.\n");

    return 0;
}

