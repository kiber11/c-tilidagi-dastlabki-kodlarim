#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int A[10];
srand(time(NULL));
int *a=A;
int sum=0;
for(int i=0;i<10;i++){
      a[i]=rand()%20;
      printf("A[%d]=%d\n",i,a[i]);
      sum+=a[i];
}
printf("Yig'indi:%d",sum);
}
