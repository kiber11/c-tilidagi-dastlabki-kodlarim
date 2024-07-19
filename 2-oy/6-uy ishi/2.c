#include<stdio.h>
int main(){
int a,b,soni=0;//a>b
printf("b="); scanf("%d",&b);
printf("a="); scanf("%d",&a);
do{
    printf("%d\n",b);
    b=b+1;
    soni++;
}
while(b<=a);
printf("soni=%d",soni);
}
