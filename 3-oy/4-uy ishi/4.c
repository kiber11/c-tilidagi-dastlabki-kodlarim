#include <stdio.h>
#include <string.h>

int main() {
    char q1[100], S[100] = "", result[100] = "";
    printf("Matn kiriting:\n");
    gets(q1);

    int len = strlen(q1);
    int unli = 0, unliEmas = 0;

    for (int i = 0; i < len; i++) {
        if (q1[i] == 'a' || q1[i] == 'e' || q1[i] == 'i' || q1[i] == 'o' || q1[i] == 'u' ||
            q1[i] == 'A' || q1[i] == 'E' || q1[i] == 'I' || q1[i] == 'O' || q1[i] == 'U') {
            S[unli++] = q1[i];
        } else {
            result[unliEmas++] = q1[i];
        }
    }

    S[unli] = '\0';
    result[unliEmas] = '\0';

    printf("Unli harflar o'chirilgan matn: %s\n", result);
    printf("O'chirilgan unli harflar: %s\n", S);

    return 0;
}
