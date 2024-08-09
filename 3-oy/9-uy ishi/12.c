#include <stdio.h>
#include <string.h>
#include <ctype.h>

void teskariChopEt(char* soz) {
    int uzunlik = strlen(soz);
    for (int i = uzunlik - 1; i >= 0; i--) {
        printf("%c", soz[i]);
    }
}


void sozlarniTeskariYokiOddiy(char* satr) {
    char soz[100];
    int j = 0;

    for (int i = 0; i <= strlen(satr); i++) {

        if (satr[i] == ' ' || satr[i] == '\0') {
            soz[j] = '\0';
            if (strlen(soz) % 2 != 0) {
                teskariChopEt(soz);
            } else {
                printf("%s", soz);
            }
            if (satr[i] == ' ') printf(" ");
            j = 0;
        } else {
            soz[j++] = satr[i];
        }
    }
}

int main() {
    char satr[200];


    printf("Satrni kiriting: ");
    gets(satr);


    sozlarniTeskariYokiOddiy(satr);

    return 0;
}

