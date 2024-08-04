#include <stdio.h>

double daraja(double asos, int Daraja) {
    if (Daraja == 0) {
        return 1;
    } else if (Daraja > 0) {
        return asos * daraja(asos, Daraja - 1);
    } else {
        return 1 / daraja(asos, -Daraja);
    }
}

int main() {
    double asos;
    int Daraja;
    printf("sonni kiriting: ");
    scanf("%lf", &asos);
    printf("Darajani kiriting: ");
    scanf("%d", &Daraja);

    double natija = daraja(asos, Daraja);
    printf("Natija: %.2lf\n", natija);

    return 0;
}
