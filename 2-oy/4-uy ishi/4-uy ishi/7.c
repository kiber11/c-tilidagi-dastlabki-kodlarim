#include<stdio.h>
int main(){
float ves;
printf("og'irlikni kiriting:"); scanf("%f",&ves);
int kilo;
printf("1 dan 5 gacha bo'lgan birlikni kiriting:"); scanf("%d",&kilo);
switch (kilo){
    case 1: printf("%f-kilogramm",ves);break;
    case 2: printf("%.4f-kilogramm",ves/1000000);break;
    case 3: printf("%f-kilogramm",ves/1000);break;
    case 4: printf("%.0f-kilogramm",ves*1000);break;
    case 5: printf("%.0f-kilogramm",ves*100);break;
    default:printf("xato kiritish");break;
}
}
