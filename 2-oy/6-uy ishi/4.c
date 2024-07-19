#include<stdio.h>
int main(){
int ogirlik=1;
float narx,bahosi;
printf("narx="); scanf("%f",&narx);
do{

    bahosi=narx*ogirlik;
    printf("bahosi=%.0f\n",bahosi);
    ogirlik=ogirlik+1;
}
while(ogirlik<=10);
}
