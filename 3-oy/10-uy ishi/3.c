#include <stdio.h>
#include <string.h>

int main(){
FILE *f;
char A[256];
char B[100] = "";


f=fopen("text.txt", "r");
    if (f==NULL) {
      printf("Fayl ochilmadi.\n");
        return 1;
    }
    if (fgets(A, sizeof(A), f) != NULL) {
        char *soz=strtok(A, " \t\n");
        if (soz!=NULL) {
            strcpy(B,soz);
        }
    }

    fclose(f);

    // Birinchi so'zni ikki marta chiqarish
    if (strlen(B)>0){
        printf("%s %s\n",B,B);
    } else{
        printf("Faylda birinchi so'z topilmadi.\n");
    }

    return 0;
}

