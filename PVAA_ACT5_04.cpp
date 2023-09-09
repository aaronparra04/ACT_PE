/*******************************************************************************/
/* Parra Velarde Aaron Alejandro        372193                                 */
/* 08/Sep/2023                                                                 */
/* Función que despliega las tablas de multiplicar de un numero.               */
/* PVAA_A05_04_432                                                             */
/*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

void tabla();

int main()
{
    tabla();
    return 0;
}

void tabla()
{
    int n, result, i;

    printf("\nIngrese un numero entre el 1 y el 20: ");
    scanf("%d",&n);

    if (n > 0 && n <= 20)
    {
        printf("\ntabla del %d : ", n);
        for (i = 1; i <= 10; i++)
        {
            result = n * i;
            printf("\n %d x %d = %d", n, i, result);
        }
    }
}