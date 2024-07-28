#include <stdio.h>
#include <string.h>

int main() {
    char q1[100], natija[100] = "";
    printf("Matn kiriting:\n");
    gets(q1);

    int uzunlik = strlen(q1);
    char vaqtinchalik[100];
    int j = 0;
    int undoshHarfiBormi;
    char unliHarflar[] = "aeiouAEIOU";

    for (int i = 0; i <= uzunlik; i++) {
        if (q1[i] == ' ' || q1[i] == '\0') {
            vaqtinchalik[j] = '\0';
            undoshHarfiBormi = 0;

            for (int k = 0; k < j; k++) {
                int unliHarfmi = 0;
                for (int v = 0; v < strlen(unliHarflar); v++) {
                    if (vaqtinchalik[k] == unliHarflar[v]) {
                        unliHarfmi = 1;
                        break;
                    }
                }
                if (!unliHarfmi && ((vaqtinchalik[k] >= 'a' && vaqtinchalik[k] <= 'z') || (vaqtinchalik[k] >= 'A' && vaqtinchalik[k] <= 'Z'))) {
                    undoshHarfiBormi = 1;
                    break;
                }
            }

            if (!undoshHarfiBormi) {
                strcat(natija, vaqtinchalik);
                strcat(natija, " ");
            }

            j = 0;
        } else {
            vaqtinchalik[j++] = q1[i];
        }
    }

    natija[strlen(natija) - 1] = '\0';

    printf("Undosh harflar o'chirilgan matn: %s\n", natija);

    return 0;
}
