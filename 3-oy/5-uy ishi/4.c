#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char matn1[1000], matn2[1000];
    char sozlar1[100][100], sozlar2[100][100];
    int index1 = 0, index2 = 0;


    printf("Birinchi matnni kiriting:\n");
    gets(matn1);
    printf("Ikkinchi matnni kiriting:\n");
    gets(matn2);


    toLowerCase(matn1);
    toLowerCase(matn2);


    char *token = strtok(matn1, " .,");
    while (token != NULL) {
        strcpy(sozlar1[index1++], token);
        token = strtok(NULL, " .,");
    }


    token = strtok(matn2, " .,");
    while (token != NULL) {
        strcpy(sozlar2[index2++], token);
        token = strtok(NULL, " .,");
    }


    printf("Bir xil so'zlar va ularning soni:\n");
    for (int i = 0; i < index1; i++) {
        int count = 0;
        for (int j = 0; j < index2; j++) {
            if (strcmp(sozlar1[i], sozlar2[j]) == 0) {
                count++;
            }
        }
        if (count > 0) {
            printf("%s: %d\n", sozlar1[i], count);
        }
    }


}
