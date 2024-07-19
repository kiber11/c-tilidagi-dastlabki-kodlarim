#include <stdio.h>

int main() {
    char kamanda;
    char yonalish = s; // Boshlang'ich yo'nalish shimol (s)

    printf("Robot yo'nalishini tanlang (s/j/q/g): ");
    scanf(" %c", &kamanda);

    switch (kamanda) {
        case 0:
            printf("Harakatni davom ettirish\n");
            break;
        case 1:
            printf("Chapga burilish\n");
            break;
        case 2:
            printf("O'ngga burilish\n");
            break;
        default:
            printf("Noto'g'ri kamanda kiritildi!\n");
    }

    // Kamanda bajarilgandan keyingi holatni aniqlash
    switch (yo'nalish) {
        case s:
            printf("Robot shimolga burilgan\n");
            break;
        case j:
            printf("Robot janubga burilgan\n");
            break;
        case q:
            printf("Robot sharqga burilgan\n");
            break;
        case g:
            printf("Robot g'arbga burilgan\n");
            break;
        default:
            printf("Noto'g'ri yo'nalish kiritildi!\n");
    }

    return 0;
}
