#include<stdio.h>
#include<stdlib.h>
int main(){
int n; printf("n="); scanf("%d",&n);
int A[8]={1,2,3,4,5,6,7,8};
int B[9];
for(int i=0;i<8;i++){
      B[i+1]=A[i];
}
      B[0]=n;
      for(int i=0;i<9;i++){
            printf("B[%d]=%d\n",i,B[i]);
      }
}


