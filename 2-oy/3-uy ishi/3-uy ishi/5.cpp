#include<stdio.h>
int main(){
int a,b,c,x,y,x1,y1;
printf("a="); scanf("%d",&a);
printf("b="); scanf("%d",&b);
printf("c="); scanf("%d",&c);
x=c-b;y=b-a;x1=a-b;y1=b-c;
if(x==y&&x>0&&y>0){
    printf("1");
}
else if(x1=y1&&x<0&&y<0){
    printf("2");
}
else if(b>a&&b>c){
    printf("%d",b);
}
else if(a==c){
    printf("5");
}
else{
    printf("0");
}
}
