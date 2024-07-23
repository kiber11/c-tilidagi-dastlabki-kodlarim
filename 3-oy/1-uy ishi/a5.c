#include<stdio.h>
int main(){
int A[5]={1,2,3,4,5};
int *a;
a=A;
int max=a[0];
for(int i=0;i<5;i++){
      if(max<a[i]){
            max=a[i];
      }
      printf("A[%d]=%d\n",i,a[i]);
}
printf("\n");
printf("Max=%d",max);
}
