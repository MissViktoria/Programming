#include <stdio.h>

// 19 вариант

// Функция для нахождения максимального значения в массиве
int Max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Функция для нахождения минимального значения в массиве
int Min(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

#define k  5

int main(){
    int z[k] = {1, 2, 3, 4, 13};
    int y[k];
    
    for (int i = 0; i < k; i ++){
    // Переворачиваем z
        y[i] = z [k- 1 - i];}

    for (int i = 0; i < k; i ++){
    // Проверяем на простоту числа и заменяем
        if(z[i] <= 3){
            z[i] = 0;
        }
        for (int j = 2; j * j <= z[i]; j++){
            if (z[i] % j != 0){
                z[i] = 0;
            }
        }
    }

// Вывод содержимого массивов Y
    printf("Содержимое массива Y: \n");
    for (int i = 0; i < k; i ++){
    printf("%d\n", y[i]);}

// Вывод содержимого массивов Z 
    printf("Содержимое массива Z (после удаления простых чисел):\n");
    for (int i = 0; i < k; i ++){
    printf("%d\n", z[i]);}

    int min_z = Min(z, k);
    int max_z = Max(z, k);
    int min = Min(y, k); 
    int max = Max(y, k);

// Сравнение максимумов и минимумов
    if (max_z > max) {
        printf("Максимум Z больше максимума Y.\n");
    } else if (max_z < max) {
        printf("Максимум Y больше максимума Z.\n");
    } else {
        printf("Максимумы Z и Y равны.\n");
    }

    if (min_z > min) {
        printf("Минимум Z больше минимума Y.\n");
    } else if (min_z < min) {
        printf("Минимум Y больше минимума Z.\n");
    } else {
        printf("Минимумы Z и Y равны.\n");
    } 
}
