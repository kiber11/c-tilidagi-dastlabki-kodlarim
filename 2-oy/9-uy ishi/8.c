#include<stdio.h>
void qiyoslash(int a,int b,int c){
if(a+b==c){
    printf("1");
}
else{
    printf("0");
}
}
int main(){
int a,b,c;
printf("a="); scanf("%d",&a);
printf("b="); scanf("%d",&b);
printf("c="); scanf("%d",&c);
qiyoslash(a,b,c);
}
