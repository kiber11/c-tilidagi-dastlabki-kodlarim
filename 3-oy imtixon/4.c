#include<stdio.h>

void recursiv(int N){
     static int a=1;
if(a<=N){
      printf(" %d ",a);
a++;
}

recursiv(N);
}
int main(){

int N; printf("N="); scanf("%d",&N);
recursiv(N);
return 0;
}
