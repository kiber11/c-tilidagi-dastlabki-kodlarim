#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void chiqar(int A[],int n){


for(int i=0;i<n;i++){
      A[i]=rand()%150-50;
      printf("A[%d]=%d\t",i,A[i]);
}
printf("\n");
}

void manfiy(int A[],int n){
for(int i=0;i<n;i++){
      if(A[i]<0){
            printf(" Birinchi manfiy son:A[%d]=%d\t",i,A[i]);
            break;
      }

}
for(int i=n-1;i>0;i--){
      if(A[i]<0){
            printf("Oxirgi manfiy son:A[%d]=%d",i,A[i]);
            break;
      }
}
}
int main(){
srand(time(NULL));
int n; printf("massiv o'lchami:"); scanf("%d",&n);
int A[n];
chiqar(A,n);
manfiy(A,n);
}
