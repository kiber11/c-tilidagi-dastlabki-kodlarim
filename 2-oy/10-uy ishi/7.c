#include<stdio.h>
#include<stdlib.h>
int main(){
int a,b;
printf("a indeksi="); scanf("%d",&a);
printf("b soni="); scanf("%d",&b);
int A[6]={1,2,3,4,5,6};
int B[6];
for(int i=0;i<6;i++){
      B[i]=A[i];

}
for(int i=0;i<6;i++){
      if(i==a){
            printf("B[%d]=%d\n",a,b);
      }
      else{
            printf("B[%d]=%d\n",i,B[i]);
}
}
}
