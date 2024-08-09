#include <stdio.h>

int main() {
    FILE *fayl_kirish, *fayl_chiqish;
    int sonlar[10];
    int i = 0;

    fayl_kirish = fopen("1.txt", "r");
    if (fayl_kirish == NULL) {

        fayl_kirish = fopen("output.txt", "r");
        if (fayl_kirish == NULL) {
            printf("Har ikkala fayl ochilmadi.\n");
            return 1;
        }
    }


    while (fscanf(fayl_kirish, "%d", &sonlar[i]) == 1) {
        i++;
        if (i == 10) break;
    }
    fclose(fayl_kirish);


    if (i == 10) {
        if (fayl_kirish == fopen("1.txt", "r")) {
            fayl_chiqish = fopen("output.txt", "w");
        } else {
            fayl_chiqish = fopen("1.txt", "w");
        }

        if (fayl_chiqish == NULL) {
            printf("Chiqish fayli ochilmadi.\n");
            return 1;
        }


        fprintf(fayl_chiqish, "%d %d\n", sonlar[0], sonlar[9]);
        fclose(fayl_chiqish);

        printf("Birinchi va oxirgi sonlar ikkinchi faylga ko'chirildi.\n");
    } else {
        printf("Faylda yetarli sonlar mavjud emas.\n");
    }

    return 0;
}

