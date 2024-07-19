#include<stdio.h>
int main(){
float ogirlik=0.1;
float narx,bahosi;
printf("narx="); scanf("%f",&narx);
do{

    bahosi=narx*ogirlik;
    printf("bahosi=%.1f\n",bahosi);
    ogirlik=ogirlik+0.1;
}
while(ogirlik<=1.1);
}
