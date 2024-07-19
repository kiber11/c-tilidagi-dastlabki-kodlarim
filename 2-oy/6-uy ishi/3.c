#include<stdio.h>
int main(){
int a,b,soni=0;//b>a
printf("a="); scanf("%d",&a);
printf("b="); scanf("%d",&b);
do{
    printf("%d\n",b);
    b=b-1;
    soni++;
}
while(a<=b);
printf("soni=%d",soni);
}
