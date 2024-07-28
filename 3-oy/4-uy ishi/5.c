#include <stdio.h>
#include <string.h>

int main() {
    char q1[100],  result[100] = "";
    printf("Matn kiriting:\n");
    gets(q1);

    int len = strlen(q1);
    int unliEmas = 0;

    for (int i = 0; i < len; i++) {
        if (q1[i] == 'a' || q1[i] == 'e' || q1[i] == 'i' || q1[i] == 'o' || q1[i] == 'u' ||
            q1[i] == 'A' || q1[i] == 'E' || q1[i] == 'I' || q1[i] == 'O' || q1[i] == 'U') {
            continue;
        } else {
            result[unliEmas++] = q1[i];
        }
    }


    result[unliEmas] = '\0';

    printf("Unli harflar o'chirilgan matn: %s\n", result);


    return 0;
}

