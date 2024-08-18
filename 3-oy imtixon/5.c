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
void step_talaba(struct Talabalar *t,int n){
printf("2-kurs talabalarining olgan umumiy stipendiyasi: ");
int sum=0;
for(int i=0;i<n;i++){
if(t[i].kurs==2){

            sum=sum+t[i].step;

}

}
printf("%d",sum);
}

int main (){
struct Talabalar t[100];
int n; printf("n="); scanf("%d",&n);
int sum=0;
talabalar_set(t,n);
talabalar_get(t,n);
 step_talaba(t,n);
return 0;
}


