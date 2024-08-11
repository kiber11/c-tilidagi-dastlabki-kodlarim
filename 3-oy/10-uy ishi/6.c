#include <stdio.h>
#include <string.h>
#include <ctype.h>

int raqam(const char *soz) {
    while (*soz){
        if(isdigit(*soz)){
            return 1;
}
soz++;
}
return 0;
}

int main() {
FILE *f;
char A[256];

f=fopen("text.txt", "r");
if(f==NULL){
        printf("Fayl ochilmadi.\n");
        return 1;
    }


if (fgets(A, sizeof(A), f) != NULL) {

char *soz = strtok(A, " \t\n");


while (soz != NULL) {
if (raqam(soz)) {
printf("%s ", soz);
}
soz=strtok(NULL, " \t\n");
}
}

fclose(f);

    return 0;
}

