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

int sana=0;
while (fgets(A, sizeof(A), f) != NULL){
char *soz = strtok(A, " \t\n");
while (soz != NULL) {
sana++;
if (sana==2){
strcpy(B,soz);
break;
      }
            soz=strtok(NULL, " \t\n");
        }
        if (strlen(B)>0){
            break;
        }
    }

    fclose(f);


    if (strlen(B) > 0) {
        printf("%s %s\n", B, B);
    } else {
        printf("Faylda ikkinchi so'z topilmadi.\n");
    }

    return 0;
}
