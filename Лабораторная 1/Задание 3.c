/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // вариант 1
    float x;
    float y;
    printf("Введите x: ");
    scanf("%f", &x);
    printf("Введите y: ");
    scanf("%f", &y);
    if (-1<y<1 && -1<x<1 && 0<(x+y)<2 )
        {
            printf("Yes");
        }
    else
        {
            printf("No");
        }
}