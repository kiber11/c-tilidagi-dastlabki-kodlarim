#include<stdio.h>
#include<math.h>
int main() {
int A,B,C,distance1,distance2,yigindi;
printf("A="); scanf("%d",&A);
printf("B="); scanf("%d",&B);
printf("C="); scanf("%d",&C);
distance1=fabs(A-C);
distance2=fabs(B-C);
printf("%d\n",distance1);
printf("%d\n",distance2);
yigindi=distance1+distance2;
printf("Yig'indisi:%d",yigindi);
}
