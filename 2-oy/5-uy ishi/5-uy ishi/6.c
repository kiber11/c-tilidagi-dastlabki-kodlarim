#include<stdio.h>
int main(){
int a,b,sum=0;
printf("a va b sonlarini kiriting:");scanf("%d %d",&a,&b);
while(a<b){
    sum+=a;
    a++;
}
printf("a dan b gacha bo'lgan sonlar yig'indisi:%d",sum);
}
