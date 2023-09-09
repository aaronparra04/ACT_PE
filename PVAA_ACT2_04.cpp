/**********************************************************************/
/* Aaron Alejandro Parra Velarde        372193                        */
/* 06/Sep/2023                                                        */
/* Programa que lee 3 números y despliega cuál número es el mayor.    */
/* PVAA_A02_04_432                                                    */
/**********************************************************************/

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, num3, mayor;

    printf ("\nDame el primer numero: ");
    scanf ("%d", &num1);
    printf ("\nDame el segundo numero: ");
    scanf ("%d", &num2);
    printf ("\nDame el tercer numero: ");
    scanf ("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        mayor = num1;
    }
    else
    {
        if (num2 > num1 && num2 > num3)
        {
            mayor = num2;
        }
        else
        {
            mayor = num3;
        }
    }

    printf("El numero mayor es: %d", mayor);

    getch();
    return 0;
}

