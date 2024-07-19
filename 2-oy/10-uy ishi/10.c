#include<stdio.h>
#include<time.h>
int main(){
int a,n,sum=0; printf("Massiv o'lchamini kiriting:"); scanf("%d",&a);
printf("Son  kiriting:"); scanf("%d",&n);
int A[a];
srand(time(NULL));
for(int i=0;i<a;i++){
      A[i]=rand()%10;
      printf("A[%d]=%d\n",i,A[i]);
      if(A[i]==n){
            sum++;
      }
}
printf("%d soni %d marta qatnashgan",n,sum);
}
