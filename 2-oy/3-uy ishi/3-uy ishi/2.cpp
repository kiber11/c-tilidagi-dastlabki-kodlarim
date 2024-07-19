#include<stdio.h>
int main() {
int a,b,c;
printf("a="); scanf("%d",&a);
printf("b="); scanf("%d",&b);
printf("c="); scanf("%d",&c);
if(a>b&&a>c){
    printf("kattasi:a=%d",a);
}
 else if(b>a&&b>c){
        printf("kattasi:b=%d",b);
    }
else{
    printf("kattasi:c=%d",c);
}
}
