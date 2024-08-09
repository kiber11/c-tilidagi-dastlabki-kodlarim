#include <stdio.h>

int main() {
    FILE *fayl_kirish, *fayl_chiqish;
    char belgi;
    int pluslar = 0, minuslar = 0, kopaytirishlar = 0, bolishlar = 0, qoldiq_olishlar = 0, darajalar = 0;


    fayl_kirish = fopen("1.txt", "r");
    if (fayl_kirish == NULL) {
        printf("Kirish fayli ochilmadi.\n");
        return 1;
    }

    // Fayldagi matematik ifodani o'qish va amallarni hisoblash
    while ((belgi = fgetc(fayl_kirish)) != EOF) {
        switch (belgi) {
            case '+':
                pluslar++;
                break;
            case '-':
                minuslar++;
                break;
            case '*':
                ko'paytirishlar++;
                break;
            case '/':
                bo'lishlar++;
                break;
            case '%':
                qoldiq_olishlar++;
                break;
            case '^':
                darajalar++;
                break;
        }
    }

    // Kirish faylini yopish
    fclose(fayl_kirish);

    // Chiqish faylini ochish
    fayl_chiqish = fopen("output.txt", "w");
    if (fayl_chiqish == NULL) {
        printf("Chiqish fayli ochilmadi.\n");
        return 1;
    }

    // Amallarni chiqish fayliga yozish
    fprintf(fayl_chiqish, "Pluslar (+): %d\n", pluslar);
    fprintf(fayl_chiqish, "Minuslar (-): %d\n", minuslar);
    fprintf(fayl_chiqish, "Ko'paytirishlar (*): %d\n", kopaytirishlar);
    fprintf(fayl_chiqish, "Bo'lishlar (/): %d\n", bolishlar);
    fprintf(fayl_chiqish, "Qoldiq olishlar (%%): %d\n", qoldiq_olishlar);
    fprintf(fayl_chiqish, "Darajalar (^): %d\n", darajalar);

    // Chiqish faylini yopish
    fclose(fayl_chiqish);

    printf("Amallar soni output.txt fayliga yozildi.\n");

    return 0;
}

