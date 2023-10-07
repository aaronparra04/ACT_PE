/*******************************************************************************/
/* Parra Velarde Aaron Alejandro        372193                                 */
/* 04/Oct/2023                                                                 */
/* Programa que despliega un menu de arreglos.                                 */
/* PVAA_A09_432_01                                                             */
/*******************************************************************************/

#include "arzat.h"

void menu();
int msg();
int llenar_rand(int vect[], int n, int ri, int rf);
int llenar_matriz(int m4triz[][4], int ri, int rf);
void imprimir_vector(int vect[], int n, char nom1[]);
void impr_matriz(int m4triz[][4],int m, int n, char nom2[]);
void busqval(int vect[]);

int main()
{
    menu();
    return 0;
}

int msg()
{
    int opc;
    printf("\nElige una opcion");
    printf("\n1.- Llenar VECTOR aleatoriamente");
    printf("\n2.- Llenar MATRIZ aleatoriamente");
    printf("\n3.- Imprimir Vector");
    printf("\n4.- Imprimir Matriz");
    printf("\n5.- Ordenar Vector");
    printf("\n6.- Buscar Valor en el Vector");
    printf("\n0.- Salir");
    printf("\n");
    scanf ("\n%d",&opc);
    return opc;
}

void menu()
{
    system("CLS");
    int opc, vect[15];
    int m4triz[4][4];
    char nom1[20],nom2[20];
    do
    {
        opc = msg();
        switch(opc)
        {
            case 1:
            system("CLS");
            printf("Nombre del Vector: ");
            fflush(stdin);
            gets(nom1);
            vect[15] = llenar_rand(vect,15,100,200);
            break;

            case 2:
            system("CLS");
            printf("Nombre de la Matriz: ");
            fflush(stdin);
            gets(nom2);
            m4triz[4][4] = llenar_matriz(m4triz,1,16);
            break;

            case 3:
            imprimir_vector(vect,15,nom1);
            break;

            case 4:
            impr_matriz(m4triz,4,4,nom2);
            break;

            case 5:
            ordenar(vect,15);
            break;

            case 6:
            busqval(vect);
            imprimir_vector(vect,15,nom1);
            break;
        }
    }while(opc != 0);
}

int llenar_rand(int vect[], int n, int ri, int rf)
{
    system("CLS");
    int rango, i, num;
    rango = (rf - ri) + 1;
    srand(time(NULL));

    for(i = 0; i < n; i++)
    {
        do
        {
            num = (rand()%rango) + ri;
        } while (busq_sec(vect,i,num) != -1);
        vect[i] = num;
    }
    printf("\nNumeros Generados.");
    printf("\n");
    system("PAUSE");
    return vect[15];
}

int llenar_matriz(int m4triz[][4], int ri, int rf)
{
    system("CLS");
    int rango, i, j, num;
    rango = (rf - ri) + 1;
    srand(time(NULL));

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            do
            {
                num = (rand()%rango) + ri;
            } while (busq_sec_matriz(m4triz,4,4,num) != -1);
            
            m4triz[i][j] = num;
        }
    }
    printf("\nNumeros Generados.");
    printf("\n");
    system("PAUSE");
    return m4triz[4][4];
}

void imprimir_vector(int vect[], int n, char nom1[])
{
    system("CLS");
    int i;
    printf("\nVector %s", nom1);
    printf("\n");
    printf("[");
    for (i = 0; i < n; i++)
    {
        printf(",%d",vect[i]);
    }
    printf("]");
    printf("\n");
    system("PAUSE");
}

void impr_matriz(int m4triz[][4], int m, int n, char nom2[])
{
    system("CLS");
    int i, j;
    printf("\nMatriz %s",nom2);
    printf("\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("\t %d",m4triz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    system("PAUSE");
}

void busqval(int vect[])
{
    int num, n = 15, i;
    system("CLS");

    num = valid_num(100,200);
    
    i = busq_sec(vect,n,num);

    if(i != -1)
    {
        printf("\nEl numero %d esta en la posicion %d del arreglo.",num,i);
    }
    else
    {
        printf("\nEl numero %d no esta en el arreglo.",num);
    }
    printf("\n");
    system("PAUSE");
}