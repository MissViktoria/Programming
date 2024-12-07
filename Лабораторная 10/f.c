#include "f.h"
#include <math.h>

float find_s(struct rhomb rhomb) {
    return 0.5 * rhomb.d1 * rhomb.d2;
}

struct rhomb find_min_s(struct rhomb rhombs[], int k) {
    struct rhomb min_s_rhomb = rhombs[0];
    float min_s = rhombs[0].s;

    for (int i = 1; i < k; i++) {
        if (rhombs[i].s < min_s) {
            min_s = rhombs[i].s;
            min_s_rhomb = rhombs[i];
        }
    }

    return min_s_rhomb;
}

int count_squares(struct rhomb rhombs[], int k) {
    int count = 0;
    float sqrt2 = sqrt(2);
    for (int i = 0; i < k; i++) {
        if (rhombs[i].d1 == rhombs[i].d2) {
            float side = rhombs[i].d1 / sqrt2;
            count += (int)(side) * (int)(side);
        }
    }
    return count;
}