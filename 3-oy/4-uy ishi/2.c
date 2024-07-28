#include<stdio.h>
#include<string.h>
int main(){
char q1[20];
char q2[20];
printf("matn kiriting:\n");
gets(q1);
printf("matn kiriting:\n");
gets(q2);
int n=strlen(q1),n1=strlen(q2);
int count=0,count2=0;
for(int i=1;i<=n;i++){
      if (n%i==0){
            count++;
      }
}
for(int i=1;i<=n1;i++){
      if(n1%i==0){
            count2++;
      }
}
if(count>2){
      printf("%s\n",q1);
}
 if(count2>2){
      printf("%s\n",q2);
}
else{
      printf("ikkala matn ham tub");
}
}
