#include <stdio.h>
#include <string.h>


int tubmi(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}


int juftmi(int n) {
    return n % 2 == 0;
}

int main() {
    char q1[100];
    printf("Matn kiriting:\n");
    gets(q1);

    int uzunlik = strlen(q1);
    char vaqtinchalik[100], natija[100] = "";
    int j = 0;

    for (int i = 0; i <= uzunlik; i++) {
        if (q1[i] == ' ' || q1[i] == '\0') {
            vaqtinchalik[j] = '\0';


            int sozUzunligi = strlen(vaqtinchalik);


            if (tubmi(sozUzunligi)) {
                char juftSoz[100] = "";
                int juftTopildi = 0;

                for (int k = 0; k < strlen(natija); k++) {
                    if (natija[k] == ' ' || natija[k] == '\0') {
                        juftSoz[j] = '\0';
                        if (juftmi(strlen(juftSoz))) {
                            strcat(natija, vaqtinchalik);
                            strcat(natija, " ");
                            juftTopildi = 1;
                            break;
                        }
                        j = 0;
                    } else {
                        juftSoz[j++] = natija[k];
                    }
                }

                if (!juftTopildi) {
                    strcat(natija, vaqtinchalik);
                    strcat(natija, " ");
                }
            } else {
                strcat(natija, vaqtinchalik);
                strcat(natija, " ");
            }

            j = 0;
        } else {
            vaqtinchalik[j++] = q1[i];
        }
    }

    natija[strlen(natija) - 1] = '\0';

    printf("Natija matn: %s\n", natija);

    return 0;
}

