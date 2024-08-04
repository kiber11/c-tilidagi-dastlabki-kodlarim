
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
void qiz_bola(struct Talabalar *t,int n){
char s[]={"va"};
int sana=0,k=0;
printf("Qiz bolalar malumoti\n");
for (int i=0;i<n;i++){
      if(strstr(t[i].familiya,s)!=NULL){
           printf("%d - talaba: \n", i+1);
     printf("Ismi: %s\n", t[i].ism);
      printf("familiyasi: %s\n", t[i].familiya);
    printf("kursi: %d\n", t[i].kurs);
    printf("Stipendiyasi: %d\n", t[i].step);
            sana++;
            k=1;
      }

}
if(k==0){
      printf("qiz bolalar yo'q");
}
else{
      printf("soni:%d ta",sana);
}
}


int main (){
struct Talabalar t[100];
int n; printf("n="); scanf("%d",&n);
talabalar_set(t,n);
talabalar_get(t,n);
qiz_bola(t,n);
return 0;
}

