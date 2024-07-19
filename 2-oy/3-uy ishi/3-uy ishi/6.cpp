#include<stdio.h>
int main(){
int a,b,c;
printf("a="); scanf("%d",&a);
printf("b="); scanf("%d",&b);
printf("c="); scanf("%d",&c);
if(a==b){
    printf("%d",c);
}
else if(a==c){
    printf("%d",b);
}
else if(b==c){
    printf("%d",a);
}
else{
    printf("0");
}
}
