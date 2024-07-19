#include<stdio.h>
void yigindi(int N){
int sum=0;
for(int i=1;i<=N;i++){
    sum+=i;
}
printf("Yig'indi=%d",sum);
}
int main(){
int N; printf("N="); scanf("%d",&N);
yigindi(N);
}
