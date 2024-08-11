#include <stdio.h>
#include <string.h>

int main(){
FILE *f;
char soz[100],soz2[100];
f=fopen("words.txt","r");
    if (f == NULL){
        printf("Fayl ochilmadi.\n");
        return 1;
}
while (fscanf(f, "%s", soz) == 1) {
strcpy(soz2, soz);
}

fclose(f);
printf("Oxirgi so'z: %s %s\n", soz2, soz2);

return 0;
}
