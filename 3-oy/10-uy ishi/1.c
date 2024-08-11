#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int n; printf("n="); scanf("%d",&n);
int Son[n];
char musbat[n];
char manfiy[n];
FILE *fpi,*fmin;
for(int i=0;i<n;i++){
      Son[i]=rand()%101-50;
      printf("  %d  ",Son[i]);
}
int j=0,l=0;
for(int i=0;i<n;i++){
      if(Son[i]>0){
            musbat[j]=Son[i];
            j++;
      }
      else{
            manfiy[l]=Son[i];
            l++;
      }
}
fpi=fopen("musbat.txt","wb");
if (fpi == NULL) {
        printf("Musbat fayl ochilmadi.\n");
        exit(1);
    }
fwrite(musbat,sizeof(char),j,fpi);
fclose(fpi);
fmin=fopen("manfiy.txt","wb");
 if (fmin == NULL) {
        printf("Manfiy fayl ochilmadi.\n");
        exit(1);
    }
fwrite(manfiy,sizeof(char),l,fmin);
fclose(fmin);
}
