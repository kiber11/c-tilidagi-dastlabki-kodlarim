#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int A[10];
srand(time(NULL));
int *a=A;
int max=a[0];
int min=a[0];
for(int i=0;i<10;i++){
     a[i]=rand()%10;
      printf("A[%d]=%d\t",i,a[i]);
      if(max<a[i]){
            max=a[i];

      }
      else if(min>a[i]){
            min=a[i];
      }
}

printf("\n");
printf("max=%d\t min=%d",max,min);
printf("\n");
for(int i=0;i<10;i++){
            if(max==a[i]){
                 printf("A[%d]=%d\t",i,min);
                 continue;
            }
            else if(min==a[i]){
                  printf("A[%d]=%d\t",i,max);
                  continue;
            }
       printf("A[%d]=%d\t",i,a[i]);
}

}

