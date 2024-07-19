#include<stdio.h>
int main(){
int a,b,c;
printf("a="); scanf("%d",&a);
printf("b="); scanf("%d",&b);
printf("c="); scanf("%d",&c);
if(a%2==0&&b%2==0&&c%2!=0){
    printf("1");
}
else if(a%2==0&&c%2==0&&b%2!=0){
    printf("1");
}
    else if(b%2==0&&c%2==0&&a%2!=0){
    printf("1");
}
else if(a%2!=0&&b%2!=0&&c%2==0){
    printf("2");
}
else if(a%2!=0&&c%2!=0&&b%2==0){
    printf("2");
}
else if (b%2!=0&&c%2!=0&&a%2==0){
    printf("2");
}
else{
    printf("0");
}
}

