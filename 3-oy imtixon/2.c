#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
int n,m; printf("n="); scanf("%d",&n);
printf("m="); scanf("%d",&m);
srand(time(NULL));
int A[n][m];
for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
            A[i][j]=rand()%20-10;
            printf("A[%d][%d] = %d ",i,j,A[i][j]);
      }
      printf("\n");
}
int sum=0;
for(int i=n-1;i>=0;i--){
      for(int j=m-1;j>=0;j--){
            if(A[i][j]<0){
                 break;
            }
            else{
                   sum=sum+A[i][j];
                  printf("%d +",A[i][j]);
            }
      }
}
printf("=%d",sum);
}
