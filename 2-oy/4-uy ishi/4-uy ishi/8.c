#include<stdio.h>
int main(){
int kun,oy;
printf("kunni kiriting:"); scanf("%d",&kun);// kabisa bo'lmagan sanani kiriting
printf("oyni kiriting:"); scanf("%d",&oy);
switch(oy){
    case 1:printf("%d-yanvar",kun);break;
    case 2:if(kun<29){
        printf("%d-fevral",kun);
        }
        else{
            printf("fevralda 28 ta kun bor");
        } break;
    case 3:printf("%d-mart",kun);break;
    case 4:printf("%d-aprel",kun);break;
    case 5:printf("%d-may",kun);break;
    case 6:printf("%d-iyun",kun);break;
    case 7:printf("%d-iyul",kun);break;
    case 8:printf("%d-avgust",kun);break;
    case 9:printf("%d-sentabr",kun);break;
    case 10:printf("%d-oktabr",kun);break;
    case 11:printf("%d-noyabr",kun);break;
    case 12:printf("%d-dekabr",kun);break;
    default:printf("Oyni to'g'ri kiriting");break;
}
}
