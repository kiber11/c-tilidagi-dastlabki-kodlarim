
#include<stdio.h>
#include<string.h>
struct Talabalar {
char ism[15];
char familiya[20];
int kurs;
int step;
};
void talabalar_set(struct Talabalar *t, int n){
    printf("\n Talabalar haqida ma'lumotlarni kiritish: \n");
    for(int i=0; i<n; i++){
    printf("%d - talaba: \n", i+1);
    printf("Ismi: "); scanf("%s",&t[i].ism);
    printf("familiyasi: "); scanf("%s",&t[i].familiya);
    printf("kursi: "); scanf("%d",&t[i].kurs);
    printf("Stipendiyasi: "); scanf("%d",&t[i].step);

    }
}
void talabalar_get(struct Talabalar *t, int n){
    printf("\n Talabalar haqida ma'lumotlar: \n");
    for(int i=0; i<n; i++){
    printf("%d - talaba: \n", i+1);
     printf("Ismi: %s\n", t[i].ism);
      printf("familiyasi: %s\n", t[i].familiya);
    printf("kursi: %d\n", t[i].kurs);
    printf("Stipendiyasi: %d\n", t[i].step);
    }
}
void qidirish(struct Talabalar *t,int n){
char ism[15];
char fam[20];
int kurs;
bir:
printf("\n qidirish parametrlari");
printf("\n1-ismi bo'yicha");
printf("\n2-familiya bo'yicha");
printf("\n3-kursi bo'yicha\n");

int k,l=0; scanf("%d",&k);

switch(k){
case 1:
printf("ism kiriting:");scanf("%s",&ism);
for(int i=0;i<n;i++){
if(strcmp(t[i].ism,ism)==0){
        printf("%d - talaba: \n", i+1);
     printf("Ismi: %s\n", t[i].ism);
      printf("familiyasi: %s\n", t[i].familiya);
    printf("kursi: %d\n", t[i].kurs);
    printf("Stipendiyasi: %d\n", t[i].step);
    l=1;
}


}
if(l==0){
      printf("bunday ismli talaba yo'q\n");
}
goto bir;
case 2:
      printf("familiya kiriting:\n");
      scanf("%s",&fam);
      for(int i=0;i<n;i++){
            if(strcmp(t[i].familiya,fam)==0){
        printf("%d - talaba: \n", i+1);
     printf("Ismi: %s\n", t[i].ism);
      printf("familiyasi: %s\n", t[i].familiya);
    printf("kursi: %d\n", t[i].kurs);
    printf("Stipendiyasi: %d\n", t[i].step);
    l=1;
}

      }
      if(l==0){
            printf("bunday familiya mavjud emas");
      }
      goto bir;
case 3:
      printf("kursini kiriting:");
      scanf("%d",&kurs);
      for(int i=0;i<n;i++){
            if(t[i].kurs==kurs){
                    printf("%d - talaba: \n", i+1);
     printf("Ismi: %s\n", t[i].ism);
      printf("familiyasi: %s\n", t[i].familiya);
    printf("kursi: %d\n", t[i].kurs);
    printf("Stipendiyasi: %d\n", t[i].step);
    l=1;
            }
      }
      if(l==0){
            printf("bu kursda o'qiydigan talabalar yo'q!");
      }
      goto bir;

      default:printf("noto'gri kiritish!");break;
}
}

int main (){
struct Talabalar t[100];
int n; printf("n="); scanf("%d",&n);
talabalar_set(t,n);
talabalar_get(t,n);
qidirish(t,n);
return 0;
}


