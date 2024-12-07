#ifndef F_H
#define F_H

struct rhomb {
    float d1;
    float d2;
    float s;
};

float find_s(struct rhomb rhomb);
struct rhomb find_min_s(struct rhomb rhombs[], int k);
int count_squares(struct rhomb rhombs[], int k);

#endif