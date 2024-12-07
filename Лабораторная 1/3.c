#include <stdio.h>
#include <math.h>

int main() {
    double x, y;

    printf("Введите координаты точки (x, y): ");
    scanf("%lf %lf", &x, &y);

    if (x * x + y * y >= 1 && x * x + y * y <= 2 && x >= 0) {
        printf("Точка принадлежит области.\n");
    } else {
        printf("Точка не принадлежит области.\n");
    }

}
