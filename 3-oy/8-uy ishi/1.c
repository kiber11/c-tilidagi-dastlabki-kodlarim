#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, max, min;
    int num_elements = 5;


    ptr = (int *)calloc(num_elements, sizeof(int));


    if (ptr == NULL) {
        printf("Xotira ajratish muvaffaqiyatsiz bo'ldi\n");
        return 1;
    }

    printf("1 o'lchovli dinamik massiv:\n");


    for (int i = 0; i < num_elements; i++) {
        printf(" %d ", ptr[i]);
    }
    printf("\n");




    for (int i = 0; i < num_elements; i++) {
        max = ptr[0];
        min = ptr[0];
        ptr[i] = i + 1;
        printf(" %d ", ptr[i]);

        if (max < ptr[i]) {
            max = ptr[i];
        }
        if (min > ptr[i]) {
            min = ptr[i];
        }
    }
    printf("\n");

    printf(" max = %d\n", max);
    printf(" min = %d\n", min);


    free(ptr);
    printf("\nxotira bo'shatildi\n");

    return 0;
}

