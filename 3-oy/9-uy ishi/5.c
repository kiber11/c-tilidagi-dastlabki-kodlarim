#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fayl_kirish, *fayl_chiqish;
    char satr[256];
    int qator_nomeri, joriy_qator = 1;

    printf("Qator nomerini kiriting: ");
    scanf("%d", &qator_nomeri);

    fayl_kirish = fopen("1.txt", "r");
    if (fayl_kirish == NULL) {
        printf("Kirish fayli ochilmadi.\n");
        return 1;
    }


    fayl_chiqish = fopen("output.txt", "w");
    if (fayl_chiqish == NULL) {
        printf("Chiqish fayli ochilmadi.\n");
        fclose(fayl_kirish);
        return 1;
    }


    while (fgets(satr, sizeof(satr), fayl_kirish)) {
        if (joriy_qator != qator_nomeri) {
            fputs(satr, fayl_chiqish);
        }
        joriy_qator++;
    }


    fclose(fayl_kirish);
    fclose(fayl_chiqish);

    printf("Tanlangan qatorsiz nusxa output.txt fayliga yozildi.\n");

    return 0;
}

