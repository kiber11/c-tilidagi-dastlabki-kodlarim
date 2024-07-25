#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int r, c;
    printf("Qatorlar sonini kiriting: ");
    scanf("%d", &r);
    printf("Ustunlar sonini kiriting: ");
    scanf("%d", &c);
      int M[r][c];
    srand(time(0));

    for (int x = 0; x < r; x++) {
        for (int y = 0; y < c; y++) {
            M[x][y] = rand() % 25;
        }
    }



    for (int x = 0; x < r; x++) {
        for (int y = 0; y < c; y++) {
            printf("%d\t", M[x][y]);
        }
        printf("\n");
    }


    int min = M[0][0];
    for (int x = 0; x < r; x++) {
        for (int y = 0; y < c; y++) {
            if (M[x][y] < min) {
                min = M[x][y];
            }
        }
    }
      int count = 0;
    int found_min = 0;

    for (int x = 0; x < r; x++) {
        for (int y = 0; y < c; y++) {
            if (found_min) {
                count++;
            }
            if (M[x][y] == min) {
                found_min = 1;
            }
        }
    }

    printf("\nEng kichik element: %d\n", min);
    printf("Eng kichik elementdan keyingi elementlar soni: %d\n", count);


}
