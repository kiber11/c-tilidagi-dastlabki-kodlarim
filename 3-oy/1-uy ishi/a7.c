#include<stdio.h>
int main(){
float a; printf("a="); scanf("%f",&a);
float *p=&a;
printf("%d",(int)*p);
return 0;
}
