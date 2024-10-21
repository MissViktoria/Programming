#include <stdio.h>

int main(){

    int a = 0b101010101;
    int fl1 = 0;
    int fl2 = 0;
    printf("Введите число:\n");
    // scanf("%d", &a);
// 12345678
for (int i = 0; i < 7; i++){
    if (((a>>i)& 1) == ((a>>(i+1))& 1)){
    fl2 = fl1 + 1;
    break;
    }
}
if (fl1 == fl2){
    printf("Да, чередуется\n");
}
else{ 
    printf("Нет, не чередуется\n");
}
}