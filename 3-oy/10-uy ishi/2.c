#include <stdio.h>
int main(){
FILE *f;
    int number,max;

f=fopen("max.txt","r");
if (f==NULL){
        printf("Fayl ochilmadi.\n");
        return 1;
    }


    fscanf(f,"%d",&number);
    max=number;


while (fscanf(f, "%d",&number)==1) {
if(number>max){
            max=number;
        }
    }
fclose(f);
printf("Eng katta son: %d\n",max);

}
