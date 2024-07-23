#include<stdio.h>
int add(int a,int b){return a+b;}
int subtract(int a,int b){return a-b;}
int main(){
int a,b; printf("a="); scanf("%d",&a);
printf("b="); scanf("%d",&b);
int (*sum)(int, int);
sum=add;
printf("Natija:%d\n",add(a,b));
int (*sub)(int, int);
sub=subtract;
printf("Natija:%d",subtract(a,b));
return 0;
}
