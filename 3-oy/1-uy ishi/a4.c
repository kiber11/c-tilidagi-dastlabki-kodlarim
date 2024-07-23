#include<stdio.h>
int main(){
int A[6]={1,-9,6,-6,3,5};
int *a=A;
for(int i=5;i>=0;i--){
      if(a[i]>0){
            printf("%d",A[i]);
            break;
      }

}
return 0;
}
