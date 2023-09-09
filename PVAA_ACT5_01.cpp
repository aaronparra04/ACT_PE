/*******************************************************************************/
/* Parra Velarde Aaron Alejandro        372193                                 */
/* 08/Sep/2023                                                                 */
/* Programa que despliega números de forma descendente.                        */
/* PVAA_A05_01_432                                                             */
/*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

void num();

int main()
{
    num();

    return 0;
}

void num()
{
    int n,i;
    printf("\nIngrese un numero: ");
    scanf("%d",&n);

    printf("\nEl orden descendente es: ");
    for (i = n; i > 0; i--)
    {
        printf("\n%d", i);
    }
}