#include<stdio.h>
#include<string.h>
int main(){
char q1[20];
char q2[20];
printf("matn kiriting:\n");
gets(q1);
printf("matn kiriting:\n");
gets(q2);
if(strlen(q1)%2==0){
if(strlen(q2)%2!=0){
printf("%s\n",q2);}
}
 if(strlen(q2)%2==0){
      if(strlen(q1)%2!=0){
      printf("%s",q1);}
}
else{
      printf("juft uzunlikdagi so'z yo'q ");
}

}
