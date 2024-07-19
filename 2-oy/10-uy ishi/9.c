#include<stdio.h>
#include<time.h>
int main(){
int n; printf("massiv o'lchami:"); scanf("%d",&n);
int A[n],B[n];
srand(time(NULL));
for(int i=0;i<n;i++){
      A[i]=rand()%100;
      printf("A[%d]=%d\n",i,A[i]);
       B[i]=A[i];
}
for(int i=n-1;i>=0;i--){

      B[i]=A[n-1-i];



}
for(int i=0;i<n;i++){
      printf("B[%d]=%d\n",i,B[i]);

}
}
