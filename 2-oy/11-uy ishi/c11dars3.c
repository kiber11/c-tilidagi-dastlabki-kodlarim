#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void chiqar(int A[],int n){


for(int i=0;i<n;i++){
      A[i]=rand()%60-50;
      printf("A[%d]=%d\n",i,A[i]);
}

}
void tub(int A[], int n) {
      printf("\n");
    int sum=0;
    for(int i = 0; i < n; i++) {
        int found = 1;
        if (A[i] < 2) {
            found = 0;
        } else {
            for(int j = 2; j * j <= abs(A[i]); j++) {
                if(A[i] % j == 0) {
                    found = 0;
                    break;
                }
            }
        }
        if(found != 0) {
            printf("A[%d] = %d - tub son\n", i, A[i]);
            sum++;
        }
    }

    printf("%d",sum);
}

int main(){
int n; printf("massiv o'lchami:"); scanf("%d",&n);
srand(time(NULL));
int A[n];
chiqar(A,n);
tub(A,n);
}

