#include <stdio.h>
#include <stdlib.h>

#define NUM_COUNT 10


void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[NUM_COUNT];
    FILE *in, *on;


    in = fopen("text.txt", "r");
    if (in == NULL) {
        perror("1.txt faylini ochishda xato");
        return 1;
    }

    for (int i = 0; i < NUM_COUNT; i++) {
        fscanf(in, "%d", &numbers[i]);
    }
    fclose(in);


    sort(numbers, NUM_COUNT);


    on = fopen("text2.txt", "w");
    if (on == NULL) {
        perror("2-output.txt faylini ochishda xato");
        return 1;
    }

    for (int i = 0; i < NUM_COUNT; i++) {
        fprintf(on, "%d\n", numbers[i]);
    }
    fclose(on);

    printf("Sonlar muvaffaqiyatli saralandi va text2.txt fayliga yozildi.\n");
    return 0;
}
