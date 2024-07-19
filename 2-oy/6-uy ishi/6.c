#include<stdio.h>
int main(){
float ogirlik=1.2;
float narx,bahosi;
printf("narx="); scanf("%f",&narx);
do{

    bahosi=narx*ogirlik;
    printf("bahosi=%.1f\n",bahosi);
    ogirlik=ogirlik+0.2;
}
while(ogirlik<=2.1);
}

