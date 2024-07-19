#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void mas_in(int A[],int n){
srand(time(NULL));

for(int i=0;i<n;i++){
      A[i]=rand()%60+1;
      printf("A[%d]=%d\t",i,A[i]);
}
}

void max_in(int A[],int n){
int max;
max=A[0];
for(int i=0;i<n;i++){
if(A[i]>max){
      max=A[i];
}
}
printf("Max=%d",max);
}
int main(){
int n; printf("Massiv o'lchami:"); scanf("%d",&n);
int A[n];
mas_in(A,n);
max_in(A,n);
}

