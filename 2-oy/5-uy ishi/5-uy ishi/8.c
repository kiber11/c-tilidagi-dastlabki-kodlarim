#include<stdio.h>
int main(){
int a,b,sum=0,son=0;
printf("a va b sonlarini kiriting:");scanf("%d %d",&a,&b);
while(a<b){
    if(a%3==0){
    sum+=a;
    son++;

    }
    a++;
}
printf("yig'indisi:%d\n",sum);
printf("soni:%d",son);
}
