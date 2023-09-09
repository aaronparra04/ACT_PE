/**********************************************************************/
/* Parra Velarde Aaron Alejandro        372193                        */
/* 02/Sep/2023                                                        */
/* Programa que realiza el juego de CHINCHAMPU (Anidadas).            */
/* PVAA_A04_08_432                                                    */
/**********************************************************************/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int jug1, comp;
    printf("\nElige (1-Piedra, 2-Papel, 3-Tijera): ");
    scanf("%d",&jug1);

    srand(time(NULL));
    comp = 1 + rand() % (4 - 1);

    if (jug1 == 1)
    {
        if (comp == 1)
        {
            printf("Es un empate. La computadora escogio piedra.");
        }
        else
        {
            if (comp == 2)
            {
                printf("Perdiste. La computadora escogio papel.");
            }
            else
            {
                printf("Ganaste. La computadora escogio tijeras.");
            }
        }
    }
    else
    {
        if (jug1 == 2)
        {
            if (comp == 1)
            {
                printf("Ganaste. La computadora escogio piedra.");
            }
            else
            {
                if (comp == 2)
                {
                    printf("Es un empate. La computadora escogio papel.");
                }
                else
                {
                    printf("Perdiste. La computadora escogio tijeras.");
                }
            }
        }
        else
        {
            if (jug1 == 3)
            {
                if (comp == 1)
                {
                    printf("Perdiste. La computadora escogio piedra.");
                }
                else
                {
                    if (comp == 2)
                    {
                        printf("Ganaste. La computadora escogio papel.");
                    }
                    else 
                    {
                        printf("Es un empate. La computadora escogio tijeras.");
                    }
                }
            }
        }    
    }

    getch();
    return 0;
}