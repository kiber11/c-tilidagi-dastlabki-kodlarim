#include<stdio.h>
int main(){
int a,b,s=1,n=1,s2=0;
printf("a="); scanf("%d",&a);//b>a
printf("b="); scanf("%d",&b);
do{

    do{
    s=1;
    s=a*a;
    n++;


    }
    while(n<=2);
    s2=s2+s;
    a++;
}
while(a<=b);
    printf("darajalari yig'indisi:yig'indisi:%d",s2);
}

