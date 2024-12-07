#include <stdio.h>
#include "f.h"

int main() {
    int K;
    printf("Введите количество ромбов: ");
    scanf("%d", &K);
    struct rhomb rhombs[K];

    for (int i = 0; i < K; i++) {
        printf("Введите диагонали ромба %d: ", i + 1);
        scanf("%f %f", &rhombs[i].d1, &rhombs[i].d2);
        rhombs[i].s = find_s(rhombs[i]);
        printf("Площадь ромба %d: %.2f\n", i + 1, rhombs[i].s);
    }

    struct rhomb min_s_rhomb = find_min_s(rhombs, K);
    printf("Ромб с минимальной площадью имеет диагонали: %.2f и %.2f\n", min_s_rhomb.d1, min_s_rhomb.d2);

    int k1 = count_squares(rhombs, K);
    printf("Количество квадратов среди заданных ромбов: %d\n", k1);

    return 0;
}