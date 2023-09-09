/*******************************************************************************/
/* Parra Velarde Aaron Alejandro        372193                                 */
/* 30/Ago/2023                                                                 */
/* Programa que ordena 3 numeros de forma ascendente.                          */
/* PVAA_A03_03_432                                                             */
/*******************************************************************************/

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, num3;

    printf ("\nDame el primer numero: ");
    scanf ("%d", &num1);
    printf ("\nDame el segundo numero: ");
    scanf ("%d", &num2);
    printf ("\nDame el tercer numero: ");
    scanf ("%d", &num3);

    if (num3 > num2 && num2 > num1)
    {
        printf("\nEl orden de los numeros es: %d, %d, %d", num1,num2,num3);
    }
    else
    {
        if (num1 > num2 && num2 > num3)
        {
            printf("\nEl orden de los numeros es: %d, %d, %d", num3,num2,num1);
        }
        else
        {
            if (num1 > num2 && num3 > num1)
            {
                printf("\nEl orden de los numeros es: %d, %d, %d", num2,num1,num3);
            }
            else
            {
                if (num1 > num3 && num3 > num2)
                {
                    printf("\nEl orden de los numeros es: %d, %d, %d", num2,num1,num3);
                }
                else
                {
                    if (num2 > num3 && num2 > num1 && num1 > num3)
                    {
                        printf("\nEl orden de los numeros es: %d, %d, %d", num3,num1,num2);
                    }
                    else
                    {
                        printf("\nEl orden de los numeros es: %d, %d, %d", num1,num3,num2);
                    }
                }
            }
        }
    }
}