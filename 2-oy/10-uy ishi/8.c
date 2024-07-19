#include<stdio.h>
#include<stdlib.h>
int main(){
int a,n; printf("a indeksi:"); scanf("%d",&a);
printf("n ta element:"); scanf("%d",&n);
int A[100],B[n];
srand(time(NULL));
for(int i=0;i<n;i++){
      A[i]=rand()%100;
      B[i]=A[i];
      printf("B[%d]=%d\n",i,B[i]);
}
for(int i=0;i<n;i++){
      if(i==a){
            continue;
      }
      printf("B[%d]=%d\n",i,B[i]);
}
}
