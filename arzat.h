/*******************************************************************************/
/* Parra Velarde Aaron Alejandro        372193                                 */
/* 04/Oct/2023                                                                 */
/* Libreria propia / personal.                                                 */
/* PVAA_A09_432                                                                */
/*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int valid_num(int ri, int rf);
int busq_sec(int vec[], int n, int num);
int tam_cadena(char cadena[]);
int busq_sec_matriz(int m4triz[][4], int m, int n, int num);
void ordenar(int vect[]);

int valid_num(int ri, int rf)
{
    int num;
    char xnum[30];

    do
    {
        printf("\nDame un numero entre %d y %d: ", ri, rf);
        fflush(stdin);
        gets(xnum);
        num = atoi(xnum);
    } while (num < ri || num > rf);

    return num;
}

int busq_sec(int vect[], int n, int num)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if(num == vect[i])
        {
            return i;
        }
    }
    return -1;
}

int busq_sec_matriz(int m4triz[][4], int m, int n, int num)
{
    int i,j;
    for (i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(num == m4triz[i][j])
            {
                return i;
            }
        }
    }
    return -1;
}


int tam_cadena(char cadena[])
{
    int i;
    for(i = 0; cadena[i] != '\0'; i++);
    return i;
}

void ordenar(int vect[], int m)
{
    int i, j, temp;

    for(i = 0; i < m-1; i++)
    {
        for(j = i+1; j < m; j++)
        {
            if (vect[j] < vect[i])
            {
                temp = vect[i];
                vect[i] = vect[j];
                vect[j] = temp;
            }
        }
    }

    printf("\nVector Ordenado.");
    printf("\n");
    system("PAUSE");
}