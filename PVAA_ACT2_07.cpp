/*******************************************************************************/
/* Parra Velarde Aaron Alejandro        372193                                 */
/* 08/Sep/2023                                                                 */
/* Programa que despliega el signo del zodiaco y el horóscopo del usuario.     */
/* PVAA_A02_07_432                                                             */
/*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

void datos();
void zodiaco(int mes, int dia);

int main()
{
    datos();

    return 0;
}

void datos()
{
    int dia, mes;
    printf("\nIngrese mes de nacimiento: ");
    scanf("%d",&mes);
    printf("\nIngrese dia de nacimiento: ");
    scanf("%d",&dia);

    zodiaco(mes, dia);
}

void zodiaco(int mes, int dia)
{
    switch (mes)
    {
        case 1:
            if (dia < 20)
            {
                printf("\nCapricornio. No pierdas el tiempo sigue haciendo las cosas bien. ");
            }
            else
            {
                printf("\nAcuario. Estás en una etapa en que la vida te sonríe. ");
            }
        break;

        case 2:
            if (dia < 19)
            {
                printf("\nAcuario. Estás en una etapa en que la vida te sonríe. ");
            }
            else
            {
                printf("\nPiscis. Te espera una experiencia de vida muy interesante. ");
            }
        break;

        case 3:
            if (dia < 21)
            {
                printf("\nPiscis. Te espera una experiencia de vida muy interesante. ");
            }
            else
            {
                printf("\nAries. Es buen momento para poner en marcha nuevos proyectos.");
            }
        break;

        case 4:
            if (dia < 20)
            {
                printf("\nAries. Es buen momento para poner en marcha nuevos proyectos.");
            }
            else
            {
                printf("\nTauro. Esfuerzate y evita dejarte dominar por el temor. ");
            }
        break;

        case 5:
            if (dia < 21)
            {
                printf("\nTauro. Esfuerzate y evita dejarte dominar por el temor. ");
            }
            else
            {
                printf("\nGeminis. Algún contratiempo en el trabajo retrasará tus planes. ");
            }
        break;

        case 6:
            if (dia < 21)
            {
                printf("\nGeminis. Algún contratiempo en el trabajo retrasará tus planes. ");
            }
            else
            {
                printf("\nCancer. Dale más importancia a tus logros.");
            }
        break;

        case 7:
            if (dia < 23)
            {
                printf("\nCancer. Dale más importancia a tus logros.");
            }
            else
            {
                printf("\nLeo. Es un buen día para vender algo de lo que te quieras deshacer.");
            }
        break;

        case 8:
            if (dia < 23)
            {
                printf("\nLeo. Es un buen día para vender algo de lo que te quieras deshacer.");
            }
            else
            {
                printf("\nVirgo. Hoy experimentarás un gran cambio en tu forma de ver la vida.");
            }
        break;

        case 9:
            if (dia < 23)
            {
                printf("\nVirgo. Hoy experimentarás un gran cambio en tu forma de ver la vida.");
            }
            else
            {
                printf("\nLibra. Hoy toca esforzarte al máximo. ");
            }
        break;

        case 10:
            if (dia < 23)
            {
                printf("\nLibra. Hoy toca esforzarte al máximo. ");
            }
            else
            {
                printf("\nEscorpio. Vas a encontrar lo que estás buscando. ");
            }
        break;

        case 11:
            if (dia < 22)
            {
                printf("\nEscorpio. Vas a encontrar lo que estás buscando. ");
            }
            else
            {
                printf("\nSagitario. No busques problemas donde no los hay. ");
            }
        break;

        case 12:
            if (dia < 22)
            {
                printf("\nSagitario. No busques problemas donde no los hay. ");
            }
            else
            {
                printf("\nCapricornio. No pierdas el tiempo sigue haciendo las cosas bien. ");
            }
        break;

        default:
            printf("Error. Ingrese de nuevo los datos. ");
        break;
    }
}