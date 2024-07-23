#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int A[10];
srand(time(NULL));
int *a=A;
for(int i=0;i<10;i++){
     a[i]=rand()%10;
      printf("A[%d]=%d\t",i,a[i]);
}
int c;
c=a[0];
a[0]=a[9];
a[9]=c;
printf("\n");
for(int i=0;i<10;i++){
       printf("A[%d]=%d\t",i,a[i]);
}

}
