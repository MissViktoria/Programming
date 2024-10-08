 #include <stdio.h>

int main() {

    int a = 7;
        for (int i = 0; i <  6; i++){
                printf(" ");
                for ( int n = a; n > a-i-i; n--){
                        printf(" ");
                }
                for ( int j = 0; j < a-i-i; j++){
                        printf("$");
                }
                printf("\n");
        }
}

