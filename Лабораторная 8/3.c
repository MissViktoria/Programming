#include <stdio.h>
#include <stdlib.h>

void print_matrix(int n, int m, int matrix[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){

    srand(time(NULL));

    int n;
    printf("Введите размер матрицы: ");
    scanf("%d", &n);

    int a[2][3] = {{1, -1, 5}, {2,1,1}};
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         a[i][j] = rand()%100;
    //     }
    // }

    int opr;
    if (n == 1){
        opr = a[0][0];
    }
    else if(n == 2){
        opr = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    }
    else{
        opr = a[0][0]*a[1][1]*a[2][2] + a[0][1]*a[1][2]*a[2][0] + a[0][2]*a[1][0]*a[2][1] - a[0][2]*a[1][1]*a[2][0] - a[1][2]*a[2][1]*a[0][0] - a[0][1]*a[1][0]*a[2][2];
    }

    print_matrix(n,n,a);
    printf("Определитель: %d\n", opr);
}