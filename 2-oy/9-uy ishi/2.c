#include<stdio.h>
void tartib(int N){
for(int i=N-1;i>0;i--){
    printf("%d\t",i);
}
printf("\n");
}
int main(){
int N; printf("N="); scanf("%d",&N);
tartib(N);
return 0;
}

