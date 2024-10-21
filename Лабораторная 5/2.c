#include <stdio.h>

int main(){

    int a;
    int k;
    printf("Введите число:");
    scanf("%d", &a);
    printf("Введите на сколько позиций хотите сдвинуть:");
    scanf("%d", &k);

    printf("%d\n", ((a << k) | (1 << k) - 1) );
}