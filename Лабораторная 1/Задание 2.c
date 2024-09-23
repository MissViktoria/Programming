/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float temperatura;
    char unit;
    printf("Input temperature: ");
    scanf("%f", &temperatura);
    scanf("%c", &unit);
    if (unit == 'C' || unit == 'c')
        {
            printf("Out temperature: ");
            printf("%.1f f", (temperatura * 9.0f / 5.0f) + 32.0f);
        }
        else if (unit == 'f' || unit == 'F')
            {
                printf("Out temperature: ");
                printf("%.1f c", (temperatura - 32.0f) * 5.0f/9.0f);
            }
            else
            {
                printf("Ouput error");
            }
}