/*******************************************************************************/
/* Parra Velarde Aaron Alejandro        372193                                 */
/* 08/Sep/2023                                                                 */
/* Función que genera N números aleatorios entre el 100 y 200.                 */
/* PVAA_A05_02_432                                                             */
/*******************************************************************************/
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>

#define N 35

void numrand();

int main()
{
    numrand();
    return 0;
}

void numrand()
{
    int nrand, i, mayor, menor, nant;

    mayor = 0;
    menor = 201;
    srand(time(NULL));

    for (i = 0; i < N; i++)
    {

        nrand = (rand() % 101) + 100;
        printf("\n%d", nrand);

        if (nrand > mayor)
        {
            mayor = nrand;
        }
        
        if (nrand < menor)
        {
            menor = nrand;
        }
    }

    printf("\nEl numero mayor es %d", mayor);
    printf("\nEl numero menor es %d", menor);
}

