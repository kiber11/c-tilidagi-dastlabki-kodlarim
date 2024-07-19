#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int A[100];
int a; printf("a="); scanf("%d",&a);
srand(time(NULL));

for(int i=0;i<a;i++){
    A[i]=rand()%100;
    printf("%d\t",A[i]);

}
int max=A[0];
int min=A[0];
for(int i=0;i<a;i++){
    if(A[i]>max){
        max=A[i];
    }
}
printf("max=%d\t",max);
for(int i=0;i<a;i++){
    if(A[i]<min){
        min=A[i];
    }
}
printf("min=%d",min);
}


