#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void mas_in(int A[],int n){
srand(time(NULL));
for(int i=0;i<n;i++){
      A[i]=rand()%60+1;
}
}
void mas_rand(int A[],int n){
for(int i=0;i<n;i++){
      printf("A[%d]=%d\t",i,A[i]);
}
}

int main(){
int n; scanf("%d",&n);
int A[n];
mas_in(A,n);
mas_rand(A,n);
}

