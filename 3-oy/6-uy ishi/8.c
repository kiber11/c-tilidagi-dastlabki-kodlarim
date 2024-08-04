#include <stdio.h>
#include <stdbool.h>


bool tubSonYordamchi(int son, int boluvchi) {
    if (boluvchi == 1) {
        return true;
    } else if (son % boluvchi == 0) {
        return false;
    } else {
        return tubSonYordamchi(son, boluvchi - 1);
    }
}


bool tubSon(int son) {
    if (son <= 1) {
        return false;
    }
    return tubSonYordamchi(son, son - 1);
}

int main() {
    int son;
    printf("Sonni kiriting: ");
    scanf("%d", &son);

    if (tubSon(son)) {
        printf("%d tub son\n", son);
    } else {
        printf("%d tub son emas\n", son);
    }

    return 0;
}

