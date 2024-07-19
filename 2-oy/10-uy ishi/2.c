#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int a,sum=0;printf("a="); scanf("%d",&a);
int A[100];

srand(time(NULL));
for(int i=0;i<a;i++){
    A[i]=rand()%50;
    printf("A[%d]=%d\n",i,A[i]);
    sum+=A[i];
}
printf("O'rtachasi:%d",sum/a);
}
