#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    int n;
    printf("Talabalar sonini kiriting: ");
    scanf("%d", &n);
    getchar();
    char familiya[n][50], ism[n][50], otasining_ismi[n][50], jinsi[n][10];

    for (int i = 0; i < n; i++) {
        printf("Talaba %d ma'lumotlarini kiriting (familiya, ism, otasining ismi, jinsi):\n", i + 1);
        gets(familiya[i]);
        gets(ism[i]);
        gets(otasining_ismi[i]);
        gets(jinsi[i]);
    }

    char qidiruv[50];
    char tanlov;
    printf("Qidiruv turini tanlang (i - ism bo'yicha, f - familiya bo'yicha): ");
    scanf(" %c", &tanlov);
    getchar();

    printf("Qidiriladigan ism yoki familiyani kiriting: ");
    gets(qidiruv);
    toLowerCase(qidiruv);

    int qiz_soni = 0, ogil_soni = 0;

    for (int i = 0; i < n; i++) {
        if (tanlov == 'i') {
            char ism_lower[50];
            strcpy(ism_lower, ism[i]);
            toLowerCase(ism_lower);

            if (strcmp(ism_lower, qidiruv) == 0) {
                if (strcmp(jinsi[i], "qiz") == 0) {
                    qiz_soni++;
                } else if (strcmp(jinsi[i], "o'g'il") == 0) {
                    ogil_soni++;
                }
            }
        } else if (tanlov == 'f') {
            char familiya_lower[50];
            strcpy(familiya_lower, familiya[i]);
            toLowerCase(familiya_lower);

            if (strcmp(familiya_lower, qidiruv) == 0) {
                if (strcmp(jinsi[i], "qiz") == 0) {
                    qiz_soni++;
                } else if (strcmp(jinsi[i], "o'g'il") == 0) {
                    ogil_soni++;
                }
            }
        }
    }

    printf("Topilgan qizlar soni: %d\n", qiz_soni);
    printf("Topilgan o'g'il bolalar soni: %d\n", ogil_soni);

    return 0;
}
