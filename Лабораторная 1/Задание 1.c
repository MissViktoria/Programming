/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int year;
   printf("Введите год\n");
   scanf("%d", &year);
   if (year % 400 == 0)
    {
        printf("Yes\n");
    }
    else if (year % 100 == 0)
        {
            printf("No\n");
        }
        else if (year% 4 == 0)
            {
                printf("Yes\n");
            }
            else
                {
                    printf("No\n");
                }
}