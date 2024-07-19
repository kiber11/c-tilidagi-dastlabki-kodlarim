#include<stdio.h>
int main(){
int kun,oy;
printf("kunni kiriting:"); scanf("%d",&kun);// kabisa bo'lmagan sanani kiriting
printf("oyni kiriting:"); scanf("%d",&oy);
switch(oy){
    case 1:printf("%d-yanvar",kun+1);break;
    case 2:if(kun<28){
        printf("%d-fevral",kun+1);
        }
        else{
            printf("fevralda 28 ta kun bor");
        } break;
    case 3:printf("%d-mart",kun+1);break;
    case 4:printf("%d-aprel",kun+1);break;
    case 5:printf("%d-may",kun+1);break;
    case 6:printf("%d-iyun",kun+1);break;
    case 7:printf("%d-iyul",kun+1);break;
    case 8:printf("%d-avgust",kun+1);break;
    case 9:printf("%d-sentabr",kun+1);break;
    case 10:printf("%d-oktabr",kun+1);break;
    case 11:printf("%d-noyabr",kun+1);break;
    case 12:printf("%d-dekabr",kun+1);break;
    default:printf("Oyni to'g'ri kiriting");break;
}
}
