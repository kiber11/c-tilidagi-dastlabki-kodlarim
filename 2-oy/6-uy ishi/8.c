#include<stdio.h>
int main(){
int a,b,s=1;
printf("a="); scanf("%d",&a);//b>a
printf("b="); scanf("%d",&b);
do{
    s=s*a;
    a++;
}
while(a<=b);
    printf("ko'paytmasi:%d",s);
}
