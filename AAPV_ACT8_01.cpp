/*******************************************************************************/
/* Parra Velarde Aaron Alejandro        372193                                 */
/* 30/Sep/2023                                                                 */
/* Programa que despliega funciones con arreglos numericos.                    */
/* PVAA_A08_432                                                                */
/*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 10

int valid_num(int ri, int rf);
int rand_rep(int vec2[], int x);
int vector_manual(int vec1[]);
int vector_random(int vec2[]);
int vector3(int vec1[], int vec2[], int vec3[]);
int matriz4x4(int vec1[], int vec2[], int m4triz[][4]);
void imprimir_vector(int vec1[], int vec2[], int vec3[]);
void impr_matriz(int m4triz[][4]);
void menu();
int msg();

int main()
{
    menu();
    return 0;
}

int msg()
{
    int opc;
    printf("\nElige una opcion");
    printf("\n1.- Llenar vector manualmente");
    printf("\n2.- Llenar vector aleatoriamente");
    printf("\n3.- Llenar un tercer vector");
    printf("\n4.- Imprimir los 3 vectores");
    printf("\n5.- Llenar matriz de 4x4");
    printf("\n6.- Imprimir Matriz");
    printf("\n0.- Salir");
    printf("\n");
    scanf ("\n%d",&opc);
    return opc;
}

void menu()
{
    system("CLS");
    int opc, vec1[M], vec2[M], vec3[M*2], m4triz[4][4];
    do
    {
        opc = msg();
        switch(opc)
        {
            case 1:
            vec1[M] = vector_manual(vec1);
            break;

            case 2:
            vec2[M] = vector_random(vec2);
            break;

            case 3:
            vector3(vec1,vec2,vec3);
            break;

            case 4:
            imprimir_vector(vec1, vec2, vec3);
            break;

            case 5:
            matriz4x4(vec1,vec2,m4triz);
            break;

            case 6:
            impr_matriz(m4triz);
            break;
        }
    }while(opc != 0);
}

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

int rand_rep(int vec2[], int x)
{
    int i;
    for (i = 0; i < M; i++)
    {
        if (vec2[i] == x)
        {
            return 1;
        }
    }
    return 0;
}

int vector_manual(int vec1[])
{
    int i = 0;
    system("CLS");

    for(i = 0; i < M; i++)
    {
        vec1[i] = valid_num(30,70);
    }

    system("PAUSE");
    system("CLS");
    return vec1[M];
}

int vector_random(int vec2[])
{
    system("CLS");
    int i = 0,x;
    srand(time(NULL));

    while(i < M)
    {
        x = rand()%20+1;
        if (rand_rep(vec2,x) == 0)
        {
            vec2[i] = x;
            i++;
        }
    }
    printf("\nNumeros generados.");
    printf("\n");
    system("PAUSE");
    return vec2[M];
}

int vector3(int vec1[], int vec2[], int vec3[])
{
    system("CLS");
    int i;

    for (i = 0; i < M; i++)
    {
        vec3[i] = vec1[i];
    }
    for (i = M; i < M*2; i++)
    {
        vec3[i] = vec2[i-M];
    }

    printf("\nVector lleno.");
    printf("\n");
    system("PAUSE");
    return vec3[M*2];
}

void imprimir_vector(int vec1[], int vec2[], int vec3[])
{
    system("CLS");
    int i;
    printf("\nPrimer Vector:");
    printf("[");
    for (i = 0; i < M; i++)
    {
        printf(",%d",vec1[i]);
    }
    printf("]");
    
    printf("\nSegundo Vector:");
    printf("[");
    for (i = 0; i < M; i++)
    {
        printf(",%d",vec2[i]);
    }
    printf("]");

    printf("\nTercer Vector:");
    printf("[");
    for (i = 0; i < M*2; i++)
    {
        printf(",%d",vec3[i]);
    }
    printf("]");

    printf("\n");
    system("PAUSE");
}

int matriz4x4(int vec1[], int vec2[], int m4triz[][4])
{
    system("CLS");
    int i, j, k = 0, k2 = 0;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 4; j++)
        {
            m4triz[i][j] = vec1[k];
            k++;
        }
    }

    for(i = 2; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            m4triz[i][j] = vec2[k2];
            k2++;
        }
    }

    printf("\nMatriz Llena.");
    printf("\n");
    system("PAUSE");
    return m4triz[4][4];
}

void impr_matriz(int m4triz[][4])
{
    system("CLS");
    int i, j;
    printf("\nMatriz de 4x4: ");
    printf("\n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("\t %d",m4triz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    system("PAUSE");
}