#include<stdio.h>
#include<string.h>
int main(){
char S[20];
int len,count;
scanf("%s",S);
len=strlen(S);
for(int i=0;i<len;i++){
count=1;
for(int j=i+1;j<len;j++){
      if(S[i]==S[j]&&S[i] != '0') {
      count++;
      S[j] = '0'; /
      }
        }
        if(S[i]!='0'){
printf("%c - %d\n",S[i],count);
      }
    }

return 0;
}
