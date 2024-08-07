#include<stdio.h>
#include<stdlib.h>

void Zigzag(int **arr,int n){
    int value=1;
    for(int i =0;i<n;i++){
        if(i%2==0){

            for(int j=0;j<n;j++){
                arr[i][j]=value++;
            }
        }
        else {
           for (int j=n-1;j>=0;j--){
                arr[i][j]=value++;
            }
        }
    }
}

void printArray(int **arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n ;printf("n="); scanf("%d",&n);

    int**arr = (int **)malloc(n*sizeof(int *));
    for(int i=0;i<n;i++){
        arr[i] = (int*)malloc(n*sizeof(int));
    }

    Zigzag(arr,n);

    printf("Output:\n");
    printArray(arr,n);

    for(int i=0;i<n;i++){
        free(arr[i]);
    }
}

