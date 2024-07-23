#include<stdio.h>
int main(){
int A[5]={1,-2,3,-4,6};
int *a;
a=A;
for(int i=0;i<5;i++){
      if(a[i]<0){
            printf("birinchi manfiy:%d",A[i]);
     break;
      }


}
return 0;
}
