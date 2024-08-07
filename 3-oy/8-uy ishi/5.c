#include<stdio.h>
#include<stdlib.h>

void zigzag(int **arr,int n){
    int value=1;
    for(int j=0;j<n;j++){

            for(int i=0;i<n;i++){
                arr[i][j]=value++;
            }
        }
    }


void printzigzag(int **arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n;printf("n=");scanf("%d",&n);


    int **arr = (int **)malloc(n*sizeof(int *));
    for(int i=0;i<n;i++){
        arr[i]=(int *)malloc(n*sizeof(int));
    }


    zigzag(arr,n);


    printf("Output:\n");
    printzigzag(arr, n);


    for(int i=0;i<n;i++){
        free(arr[i]);
    }
    free(arr);

    return 0;
}
