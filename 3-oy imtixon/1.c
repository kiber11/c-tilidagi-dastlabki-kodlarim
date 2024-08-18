#include<stdio.h>

int main (){
int n,m; printf("n="); scanf("%d",&n);
printf("m="); scanf("%d",&m);
int sum,value = 1;
int Sum[n];
for(int i=0; i<n;i++){
            sum=0;
     for(int j=0;j<m;j++){
      printf("% d ",value);
      sum=sum+value;
      value++;
     }
Sum[i]=sum;
     printf("\n");
}
for(int i=0;i<n;i++){
      printf("%d qatorda %d\n",i+1,Sum[i]);
}
}

