#include<stdio.h>
int main(){
int a;
printf("a sonini kiriting:"); scanf("%d",&a);
int sum,i;
for(i=0;i<=a;i++){
    if(i%5==0){
        sum=sum+i;

    }

}
printf(" 0 dan a sonigacha bo'lga 5 ga bo'linadigan sonlar yig'indisi:%d\n",sum);

}
