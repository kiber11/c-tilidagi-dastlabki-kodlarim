#include<stdio.h>
void yigindi(int N){
int sum=1;
for(int i=1;i<=N;i++){
    sum*=i;
}
printf("Ko'paytma=%d",sum);
}
int main(){
int N; printf("N="); scanf("%d",&N);
yigindi(N);
}

