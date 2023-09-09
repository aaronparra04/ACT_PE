/*******************************************************************************/
/* Parra Velarde Aaron Alejandro        372193                                 */
/* 08/Sep/2023                                                                 */
/* Programa que calcula el promedio de un alumno.                              */
/* PVAA_A02_01_432                                                             */
/*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

void calific();
void mensaje (float prom);

int main()
{
    calific ();

    return 0;
}

void calific()
{
    float calif1, calif2, calif3, prom;

	printf("Dame la primer calificacion: ");
    scanf("%f",&calif1);
    printf("Dame la segunda calificacion: ");
    scanf("%f",&calif2);
    printf("Dame la tercer calificacion: ");
    scanf("%f",&calif3);

    prom = (calif1 + calif2 + calif3) / 3;

    mensaje(prom);
}

void mensaje (float prom)
{
    if (prom < 80)
    {
        if (prom < 80)
        {
            if (prom < 70)
            {
                if (prom < 60)
                {
                    if (prom < 30)
                    {
                        printf("Repetir. Promedio: %.2f", prom);
                    }
                }
                else
                {
                    printf("Extraordinario. Promedio: %.2f", prom);
                }
            }
            else
            {
                printf("Suficiente. Promedio: %.2f", prom);
            }
        }
        else
        {
            printf("Regular. Promedio: %.2f", prom);
        }
	}
    else
    {
        if (prom < 90)
        {
            printf("Bien. Promedio: %.2f", prom);
        }
        else
        {
            if (prom < 98)
            {
                printf("Muy Bien. Promedio: %.2f", prom);
            }
            else
            {
                if (prom <= 100)
                {
                    printf("Excelente. Promedio: %.2f", prom);
                }
                else
                {
                    printf("Error en promedio");
                }
            }
        }
    }
}
