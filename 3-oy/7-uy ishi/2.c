#include<stdio.h>
#include<string.h>
struct Talabalar {
char ism[15];
int kurs;
int step;
};
void talabalar_set(struct Talabalar *t, int n){
    printf("\n Talabalar haqida ma'lumotlarni kiritish: \n");
    for(int i=0; i<n; i++){
    printf("%d - talaba: \n", i+1);
    printf("Ismi: "); scanf("%s",&t[i].ism);
    printf("kursi: "); scanf("%d",&t[i].kurs);
    printf("Stipendiyasi: "); scanf("%d",&t[i].step);

    }
}
void talabalar_get(struct Talabalar *t, int n){
    printf("\n Talabalar haqida ma'lumotlar: \n");
    for(int i=0; i<n; i++){
    printf("%d - talaba: \n", i+1);
     printf("Ismi: %s\n", t[i].ism);
    printf("kursi: %d\n", t[i].kurs);
    printf("Stipendiyasi: %d\n", t[i].step);
    }
}
void  ism_5(struct Talabalar *t, int n){
printf("ismi 5 harfdan kam bo'lgan talabalar:\n");
int s=0;
for(int i=0;i<n;i++){

      if(strlen(t[i].ism)<5){
 printf("%d - talaba: \n", i + 1);
            printf("Ismi: %s\n", t[i].ism);
            printf("Kursi: %d\n", t[i].kurs);
            printf("Stipendiyasi: %d\n", t[i].step);

            s=1;
      }
      }
      if(s==0){
      printf("ismi  5 harfdan kichik bo'lgan talabalar yo'q");
      }

}


int main (){
struct Talabalar t[100];
int n; printf("n="); scanf("%d",&n);
talabalar_set(t,n);
talabalar_get(t,n);
ism_5(t,n);
return 0;
}

