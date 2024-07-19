#include<stdio.h>
#include<math.h>
int main() {
int A,B,C,distance1,distance2,kopaytma;
printf("A="); scanf("%d",&A);
printf("B="); scanf("%d",&B);
printf("C="); scanf("%d",&C);//C nuqta A va B ning o'rtasida
distance1=fabs(A-C);
distance2=fabs(B-C);
printf("%d\n",distance1);
printf("%d\n",distance2);
kopaytma=distance1*distance2;
printf("Ko'paytmasi:%d",kopaytma);
}
