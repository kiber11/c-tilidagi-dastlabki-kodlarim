#include<stdio.h>
void tartib(int N){
for(int i=1;i<N;i++){
    printf("%d\t",i);
}
printf("\n");
}
int main(){
int N; printf("N="); scanf("%d",&N);
tartib(N);
return 0;
}
