#include<stdio.h>
int main(){
int a,b; scanf("%d",&a);
b=a/10;
if(b==0){
    printf("1");
}
else if(b>0&&b<10){
printf("2");
}
else if(b>9&&b<100) {
    printf("3");
}
else{
    printf("3>");
}
}
