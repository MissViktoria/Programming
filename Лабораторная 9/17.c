#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void print_matrix(int n, int matrix[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n = 3;
    int a[n][n];
    int b;

    printf("Введите способ ввода матрицы 3 на 3 (1 - сами введёте, 2 - рандом): ");
    scanf("%d", &b);
    if (b == 1){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                //  int ret = scanf("%d", &a[i][j]);
                while (scanf("%d", &a[i][j]) != 1) {
                    while (!isspace(a[i][j] = getchar()));
                    printf("You must enter a valid number. Try again.\n");
                    continue;
                }
            }
        }
    }
    else if(b == 2){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                a[i][j] = rand()%10;
            }
        }
    }
    else{
        printf("Неверное значение\n");
        return 0;
    }

    print_matrix(n,a);

    int c[3] = {0, 0, 0};
    int min = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            for (int k = 0; k < n - j - 1; k++) {
                if (a[k][i] > a[k + 1][i]) {
                    int temp = a[k][i];
                    a[k][i] = a[k + 1][i];
                    a[k + 1][i] = temp;
                    c[i]++;
                }
            }
        }
    }

    printf("По возрастанию \n");
    print_matrix(n,a);
    printf("количество преобразований в каждом: %d %d %d\n", c[0], c[1], c[2]);

    for (int i = 0; i < n; i++) {
        if(c[i] < c[min]){
            min = i;
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++){
        if(a[i][min] > 0){
            count ++;
        }
        a[i][min] = 0;
    }

    print_matrix(n,a);
    printf("количество положительных элементов: %d\n", count);
}