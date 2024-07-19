#include<stdio.h>
int main() {
float R,pi=3.14,L,S;
printf("R="); scanf("%f",&R);
L=2*pi*R;
printf("L=2*%.2f*%.1f=%.2f\n",pi,R,L);
S=pi*R*R;
printf("S=%.2f*%.1f*%.1f=%.2f",pi,R,R,S);
}
