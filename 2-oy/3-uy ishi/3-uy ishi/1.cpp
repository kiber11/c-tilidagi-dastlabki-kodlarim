#include<stdio.h>
int main() {
int a; printf("a="); scanf("%d",&a);
if(a>10){
    a=a+3;printf("%d",a);
}
else if(a==10){
    printf("22");
}
else{
    a=a*2;printf("%d",a);
}
}
