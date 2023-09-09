/*******************************************************************************/
/* Parra Velarde Aaron Alejandro        372193                                 */
/* 08/Sep/2023                                                                 */
/* Función que genera 40 números aleatorios entre el 0 y 200.                  */
/* PVAA_A05_02_432                                                             */
/*******************************************************************************/
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>

void numrand();

int main()
{
    numrand();
    return 0;
}

void numrand()
{
    int nrand, i, j, k, acpar, acimpar;

    j = 0;
    k = 0;

    srand(time(NULL));
    
    for (i = 0; i < 40; i++)
    {
        nrand = rand() % 201;
        printf("\n%d", nrand);

        if (nrand % 2 == 0)
        {
            printf("\nEl numero es par.");
            j += 1;
            acpar += nrand;
        }
        else
        {
            printf("\nEl numero es impar.");
            k += 1;
            acimpar += nrand;
        }
    }

    printf("\nSe encontraron %d numeros pares.", j);
    printf("\nSe encontraron %d numeros impares.", k);

    printf("\nLa suma de numeros pares es %d.", acpar);
    printf("\nLa suma de numeros impares es %d.", acimpar);
}