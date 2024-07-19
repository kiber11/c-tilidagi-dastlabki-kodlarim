#include<stdio.h>
int main(){
int kun;
printf("Hafta kunining raqamini kiriting:"); scanf("%d",&kun);
switch(kun){
    case 1:printf("Dushanba");break;
    case 2:printf("Seshanba");break;
    case 3:printf("Chorshanba");break;
    case 4:printf("Payshanba");break;
    case 5:printf("Juma");break;
    case 6:printf("Shanba");break;
    case 7:printf("Yakshanba");break;
    default:printf("Hafta kunlarini 1dan 7 gacha bo'lgan sonlardan tanlang!"); break;
}
}
