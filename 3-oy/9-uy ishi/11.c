#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    int array[5][5];


    outputFile = fopen("output.txt", "r");
    if (outputFile == NULL) {
        printf("Faylni ochishda xatolik yuz berdi.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            fscanf(outputFile, "%d", &array[i][j]);
        }
    }

    fclose(outputFile);


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j > i && j < 5 - i - 1) {
                array[i][j] = 0;
            }
        }
    }


    inputFile = fopen("input.txt", "w");
    if (inputFile == NULL) {
        printf("Faylni yozishda xatolik yuz berdi.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            fprintf(inputFile, "%d ", array[i][j]);
        }
        fprintf(inputFile, "\n");
    }

    fclose(inputFile);


    printf("Massiv:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

