#include<stdio.h>
#include<string.h>
int main(){

char q1[20];
char q2[20];
printf("matn kiriting:\n");
gets(q1);
printf("matn kiriting:");
gets(q2);


if(strlen(q1)%2!=0){
printf("%s\n",q1);}

 if(strlen(q2)%2!=0){
      printf("%s",q2);
}
else{
      printf(" ");
}
}

