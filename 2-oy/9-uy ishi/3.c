#include<stdio.h>
void tartib(int N){
    printf("juft:");
for(int i=2;i<N;i+=2){
    printf("%d\t",i);
}
printf("\n");
printf("toq:");
if(N%2==0){
for(int j=N-1;j>0;j-=2){

    printf("%d\t",j);
}
}
else{
    for(int j=N;j>0;j-=2){
        printf("%d\t",j);
    }
}
}
int main(){
int N; printf("N="); scanf("%d",&N);
tartib(N);
return 0;
}

