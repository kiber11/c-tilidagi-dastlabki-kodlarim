#include <stdio.h>

int main(){
int N,i,a=0,K;
printf("N=");scanf("%d",&N);
printf("K=");scanf("%d",&K);
for( i=0;i<=N;i+=K){
    a++;
}
printf("butun qismi:%d\n",a-1);
printf("qoldig'i:%d",N-(i-K));
}
