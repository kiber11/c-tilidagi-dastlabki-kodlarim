      #include <stdio.h>

int main() {
    FILE *fayl1, *fayl2, *fayl_chiqish;
    char satr[256];


    fayl1 = fopen("1.txt", "r");
    if (fayl1 == NULL) {
        printf("1.txt fayli ochilmadi.\n");
        return 1;
    }


    fayl2 = fopen("2.txt", "r");
    if (fayl2 == NULL) {
        printf("2.txt fayli ochilmadi.\n");
        fclose(fayl1);
        return 1;
    }


    fayl_chiqish = fopen("output.txt", "w");
    if (fayl_chiqish == NULL) {
        printf("output.txt fayli ochilmadi.\n");
        fclose(fayl1);
        fclose(fayl2);
        return 1;
    }


    while (fgets(satr, sizeof(satr), fayl1)) {
        fputs(satr, fayl_chiqish);
    }


    while (fgets(satr, sizeof(satr), fayl2)) {
        fputs(satr, fayl_chiqish);
    }


    fclose(fayl1);
    fclose(fayl2);
    fclose(fayl_chiqish);

    printf("1.txt va 2.txt fayllari output.txt fayliga birlashtirildi.\n");

    return 0;
}

