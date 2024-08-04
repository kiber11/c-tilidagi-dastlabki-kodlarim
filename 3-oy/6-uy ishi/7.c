#include <stdio.h>


int Yigindi(int son) {
    if (son == 0) {
        return 0;
    }
    return (son % 10) + Yigindi(son / 10);
}

int main() {
    int son;
    printf("Sonni kiriting: ");
    scanf("%d", &son);

    int yigindi = Yigindi(son);
    printf("Raqamlar yig'indisi: %d\n", yigindi);

    return 0;
}

