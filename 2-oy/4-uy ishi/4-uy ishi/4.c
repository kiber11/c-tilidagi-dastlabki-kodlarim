#include<stdio.h>
int main(){
int oy;
printf("Oy raqamini kiriting:"); scanf("%d",&oy);
switch(oy){
    case 1:printf("Yanvarda 31 kun bor");break;
    case 2:printf("Fevralda 28/29 kun bor");break;
    case 3:printf("Martda 31 kun bor");break;
    case 4:printf("Apreldada 30 kun bor");break;
    case 5:printf("Mayda 31 kun bor");break;
    case 6:printf("Iyunda 30 kun bor");break;
    case 7:printf("Iyulda 31 kun bor");break;
    case 8:printf("Avgustda 31 kun bor");break;
    case 9:printf("Sentabrda 30 kun bor");break;
    case 10:printf("Oktabrda 31 kun bor");break;
    case 11:printf("Noyabrda 30 kun bor");break;
    case 12:printf("Dekabrda 31 kun bor");break;
    default:printf("Bi yilda 12 ta oy bor!");break;
}
}
