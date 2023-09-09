/**********************************************************************/
/* Parra Velarde Aaron Alejandro        372193                        */
/* 02/Sep/2023                                                        */
/* Programa que realiza el juego de CHINCHAMPU (Seleccion Multiple).  */
/* PVAA_A04_09_432                                                    */
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

    switch(jug1)
    {
        case 1:
        switch(comp)
        {
            case 1:
            printf("Es un empate. La computadora escogio piedra.");
            break;
            case 2:
            printf("Perdiste. La computadora escogio papel.");
            break;
            case 3:
            printf("Ganaste. La computadora escogio tijeras.");
            break;
        }
        break;

        case 2:
        switch(comp)
        {
            case 1:
            printf("Ganaste. La computadora escogio piedra.");
            break;
            case 2:
            printf("Es un empate. La computadora escogio papel.");
            break;
            case 3:
            printf("Perdiste. La computadora escogio tijeras.");
            break;
        }
        break;

        case 3:
        switch(comp)
        {
            case 1:
            printf("Perdiste. La computadora escogio piedra.");
            break;
            case 2:
            printf("Ganaste. La computadora escogio papel.");
            break;
            case 3:
            printf("Es un empate. La computadora escogio tijeras.");
            break;
        }
        break;

        default:
        break;
    }
    getch();
    return 0;     
}