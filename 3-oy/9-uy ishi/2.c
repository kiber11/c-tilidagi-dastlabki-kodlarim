#include <stdio.h>

int main() {
    FILE *fayl;
    int son, summa = 0;
    int sonlar_soni = 0;
    float o_rta_arifmetigi;


    fayl = fopen("text.txt", "r");


    if (fayl == NULL) {
        printf("Fayl ochilmadi.\n");
        return 1;
    }


    while (fscanf(fayl, "%d", &son) != EOF) {
        summa += son;
        sonlar_soni++;
    }


    fclose(fayl);


    if (sonlar_soni > 0) {
        o_rta_arifmetigi = (float)summa / sonlar_soni;

        printf("O'rta arifmetigi: %.2f\n", o_rta_arifmetigi);
    } else {
        printf("Fayl bo'sh yoki unda sonlar yo'q.\n");
    }

    return 0;
}
