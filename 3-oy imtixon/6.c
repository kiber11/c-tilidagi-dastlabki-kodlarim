#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
    FILE *fJuft,*fToq,*fMusbat,*fManfiy;
    int n;
    printf("n=");
    scanf("%d",&n);
    srand(time(NULL));

    int A[n];
    int musbat[n], manfiy[n], juft[n], toq[n];


    for (int i = 0; i < n; i++) {
        A[i] = rand() % 101 - 50;
        printf("A[%d] = %d\n", i + 1, A[i]);
    }

    int j = 0, k = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > 0) {
            musbat[j++] = A[i];
        } else {
            manfiy[k++] = A[i];
        }
    }

    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) {
            juft[a++] = A[i];
        } else {
            toq[b++] = A[i];
        }
    }


    fJuft = fopen("juft_fayl.txt", "w");
    if (fJuft == NULL) {
        printf("fayl topilmadi");
        return 1;
    }
    for (int i = 0; i < a; i++) {
        fprintf(fJuft, "%d ", juft[i]);
    }
    fclose(fJuft);

    fToq = fopen("toq_fayl.txt", "w");
    if (fToq == NULL) {
        printf("fayl topilmadi");
        return 1;
    }
    for (int i = 0; i < b; i++) {
        fprintf(fToq, "%d ", toq[i]);
    }
    fclose(fToq);

    fMusbat = fopen("musbat_fayl.txt", "w");
    if (fMusbat == NULL) {
        printf("fayl topilmadi");
        return 1;
    }
    for (int i = 0; i < j; i++) {
        fprintf(fMusbat, "%d ", musbat[i]);
    }
    fclose(fMusbat);

    fManfiy = fopen("manfiy_fayl.txt", "w");
    if (fManfiy == NULL) {
        printf("fayl topilmadi");
        return 1;
    }
    for (int i = 0; i < k; i++) {
        fprintf(fManfiy, "%d ", manfiy[i]);
    }
    fclose(fManfiy);

    return 0;
}
