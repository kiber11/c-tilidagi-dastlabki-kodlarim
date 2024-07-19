#include<stdio.h>
int main(){
int a,i=2,son=0; printf("a="); scanf("%d",&a);
while(i<a){
    if(i%2==0){
        son++;

    }
    i++;
}
printf("Juft sonlar soni:%d",son);
}
