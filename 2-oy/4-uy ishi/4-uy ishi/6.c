#include<stdio.h>
int main(){
float kesma; printf("Kesma uzunligini kiriting:"); scanf("%f",&kesma);
int metr; printf("1 dan 5 gacha amalni kiriting:"); scanf("%d",&metr);
switch(metr){
    case 1:printf("metr:%.3f",kesma/10);break;
    case 2:printf("metr:%.0f",kesma*1000);break;
    case 3:printf("metr:%f",kesma);break;
    case 4:printf("metr:%.3f",kesma/1000000);break;
    case 5:printf("metr:%.3f",kesma/100000);break;
    default:printf("xato kiritish!");break;

}
}
