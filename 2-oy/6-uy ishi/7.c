#include<stdio.h>
int main(){
int a,b,s=0;
printf("a="); scanf("%d",&a);//b>a
printf("b="); scanf("%d",&b);
do{
    s=s+a;
    a++;
}
while(a<=b);
    printf("yig'indisi:%d",s);
}
