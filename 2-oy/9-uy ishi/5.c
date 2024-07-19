#include<stdio.h>
void teskari(int A, int B){
if(A<B){
    for(int i=B;i>A;i--){
        printf("%d\t",i);
    }
}
else{
    for(int j=A;j>B;j--){
        printf("%d\t",j);

    }
}
}
int main(){
int A,B;
printf("A="); scanf("%d",&A);
printf("B="); scanf("%d",&B);
teskari(A,B);
}
