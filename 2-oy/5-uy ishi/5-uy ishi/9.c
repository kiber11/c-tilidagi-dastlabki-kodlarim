#include<stdio.h>
int main(){
int a,b,son=0;
printf("a va b sonlarini kiriting:");scanf("%d %d",&a,&b);
while(a<b){
    if(a%3==0&&a%2==0){
    son++;

    }
    a++;
}
printf("a va b orasidagi 2ga va 3ga bo'linadigan sonlar soni:%dta",son);
}
