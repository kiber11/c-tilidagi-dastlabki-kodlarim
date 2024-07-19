#include<stdio.h>
int main(){
int a,b,i,son=0;
printf("a="); scanf("%d",&a);
printf("b="); scanf("%d",&b);
for(i=a;i<b;i++){
    if(i%2==0){
        son++;
    }
}
printf("a dan b gacha bo'lgan juft sonlar soni:%dta",son);
}
