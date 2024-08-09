#include <stdio.h>

#define SIZE 5

void zigzagYozish(int arr[SIZE][SIZE], FILE *fayl) {
    for (int i = 0; i < SIZE; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < SIZE; j++) {
                fprintf(fayl, "%d ", arr[i][j]);
                printf("%d ", arr[i][j]);
            }
        } else {
            for (int j = SIZE - 1; j >= 0; j--) {
                fprintf(fayl, "%d ", arr[i][j]);
                printf("%d ", arr[i][j]);
            }
        }
    }
    fprintf(fayl, "\n");
    printf("\n");
}

int main() {
    FILE *fayl_kirish, *fayl_chiqish;
    int array[SIZE][SIZE];


    fayl_kirish = fopen("output.txt", "r");
    if (fayl_kirish == NULL) {
        printf("output.txt fayli ochilmadi.\n");
        return 1;
    }


    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            fscanf(fayl_kirish, "%d", &array[i][j]);
        }
    }


    fclose(fayl_kirish);


    fayl_chiqish = fopen("input.txt", "w");
    if (fayl_chiqish == NULL) {
        printf("input.txt fayli ochilmadi.\n");
        return 1;
    }


    zigzagYozish(array, fayl_chiqish);

    fclose(fayl_chiqish);

    return 0;
}

