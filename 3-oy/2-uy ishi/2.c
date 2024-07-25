#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int n, m;
printf("n=");
scanf("%d", &n);
printf("m=");
scanf("%d", &m);

int A[n][m];
for(int i=0;i<n;i++){
      int sum=0;
      for(int j=0;j<m;j++){
                  A[i][j]=rand()%30;
            printf("%d\t",A[i][j]);
            sum=sum+A[i][j];
      }
      printf("sum=%d",sum);
      printf("\n");
}
}


