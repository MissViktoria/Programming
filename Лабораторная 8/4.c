#include <stdio.h>
#include <stdlib.h>

void print_matrix(int n, int m, int matrix[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int n = 3;
    printf("Введите размер матрицы: ");
    // scanf("%d", &n);
    int a[3][4] = {{1, 2, 3, 5}, {4, 5, 6, 8}, {7, 8, 0, 2}};

    // int a[n][n+1];
    // for(int i = 0; i < (n); i++){
    //     for(int j = 0; j < n+1; j++){
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

    float opr_x, opr_y, opr_z;
    float x, y, z;

    if (n == 2){
        opr_x = (a[0][2] * a[1][1] - a[0][1] * a[1][2]);
        x = opr_x / opr;
        opr_y = (a[0][0] * a[1][2] - a[0][2] * a[1][0]);
        y = opr_y / opr;
    }
    else if (n == 3){
        opr_x = a[0][3]*a[1][1]*a[2][2] + a[0][1]*a[1][2]*a[2][3] + a[0][2]*a[1][3]*a[2][1] - a[0][2]*a[1][1]*a[2][3] - a[1][2]*a[2][1]*a[0][3] - a[0][1]*a[1][3]*a[2][2];
        x = opr_x / opr;
        opr_y = a[0][0]*a[1][3]*a[2][2] + a[0][3]*a[1][2]*a[2][0] + a[0][2]*a[1][0]*a[2][3] - a[0][2]*a[1][3]*a[2][0] - a[1][2]*a[2][3]*a[0][0] - a[0][3]*a[1][0]*a[2][2];
        y = opr_y / opr;
        opr_z = a[0][0]*a[1][1]*a[2][3] + a[0][1]*a[1][3]*a[2][0] + a[0][3]*a[1][0]*a[2][1] - a[0][3]*a[1][1]*a[2][0] - a[1][3]*a[2][1]*a[0][0] - a[0][1]*a[1][0]*a[2][3];
        z = opr_z / opr;
    }

    print_matrix(n,n+1,a);
    printf("Определитель: %d\n", opr);
    printf("Определители: x = %f, y = %f\n", opr_x, opr_y);
    printf("x = %f, y = %f, z = %f\n", x, y, z);
}