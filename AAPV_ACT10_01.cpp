/*******************************************************************************/
/* Parra Velarde Aaron Alejandro        372193                                 */
/* 11/Oct/2023                                                                 */
/* Programa que despliega un menu de estructuras.                              */
/* PVAA_A10_432_01                                                             */
/*******************************************************************************/

#include <string.h>
#include "arzat.h"
#include <time.h>
#define N 500

typedef struct _alum
{
    int status;
    int matric;
    char nombre[30];
    char apat[30];
    char amat[30];
    int edad;
    int sexo;
}Talum;

void menu();
void msg();
void apellidos(char cadena[]);
void nom_mujer(char cadena[]);
void nom_hombre(char cadena[]);
void imprimirV(Talum vect[], int n);
void buscar(Talum vect[], int n);
int busreg(Talum vect[], int n, int mtr);
void ordenar(Talum vect[], int m);
Talum eliminar(Talum vect[],int n);
Talum gen_reg_man();
Talum gen_reg_aut();

int main()
{
    menu();
    return 0;
}

void msg()
{
    printf("\n1.- Agregar registro automatico");
    printf("\n2.- Agregar registro manualmente");
    printf("\n3.- Eliminar registro");
    printf("\n4.- Buscar en el vector");
    printf("\n5.- Ordenar Registro");
    printf("\n6.- Imprimir Registro");
    printf("\n0.- Salir");
    printf("\n");
}

void menu()
{
    system("CLS");
    Talum reg, vect[N], vect2[N];
    int opc, i = 0, j;
    srand(time(NULL));
    do
    {
        system("CLS");
        msg();
        opc = valid_num(0,6,"Elige una opcion");
        switch(opc)
        {
            case 1:
            if (i < N-10)
            {
                for(j = 0; j < 10; j++)
                {
                    vect[i] = gen_reg_aut();
                    i++;
                }
                printf("\nRegistro generado.");
                printf("\n");
                system("PAUSE");
            }
            break;

            case 2:
            if (i < N-1)
            {
                vect[i++] = gen_reg_man();
            }
            break;

            case 3:
            vect[N] = eliminar(vect,i);
            break;

            case 4:
            buscar(vect,i);
            break;

            case 5:
            ordenar(vect,i);
            break;

            case 6:
            imprimirV(vect,i);
            break;
        }
    }while(opc != 0);
}

Talum gen_reg_man()
{
    system("CLS");
    Talum reg;
    reg.status = 1;
    reg.matric = valid_num(300000,399999,"\nIngrese su matricula: ");

    printf("\nApellido Paterno: ");
    fflush(stdin);
    gets(reg.apat);
    mayus(reg.apat);

    printf("\nApellido Materno: ");
    fflush(stdin);
    gets(reg.amat);
    mayus(reg.amat);

    printf("\nNombre(s): ");
    fflush(stdin);
    gets(reg.nombre);
    mayus(reg.nombre);

    reg.edad = valid_num(10,80, "\nIngrese su edad: ");
    reg.sexo = valid_num(0,1,"\nSexo (1.-Hombre, 0.-Mujer): ");

    return reg;
}

void imprimirV(Talum vect[], int n)
{
    int i;
    system("CLS");
    printf("\tNo.   Matricula       Nombre(s)     A. Paterno   A.Materno     Edad  Sexo");

    for(i = 0; i < n; i++)
    {
        printf("\n\t%2d %10d %17s %12s %13s %7d %5d",i+1,vect[i].matric,vect[i].nombre,vect[i].apat,vect[i].amat,vect[i].edad,vect[i].sexo);
    }
    printf("\n");
    system("PAUSE");
}

Talum gen_reg_aut()
{
    Talum reg;
    reg.status = 1;
    reg.matric = (rand()%399999) + 300000;
    
    apellidos(reg.apat);
    apellidos(reg.amat);
    reg.sexo = rand()%2;
    reg.edad = (rand()%60) + 10;

    if (reg.sexo == 1)
    {
        nom_hombre(reg.nombre);
    }
    else
    {
        nom_mujer(reg.nombre);
    }
    return reg;
}

void apellidos(char cadena[])
{
    char ap[20][12] = {"LOPEZ","RUIZ","GONZALEZ","HERNANDEZ","RAMIREZ","GARCIA","NUÑEZ","OROZCO","TAPIA","PARRA","REYES","RODRIGUEZ","FERNANDEZ","VALENZUELA","ALVARADO","PEREZ","MULLER","DOMINGUEZ","ESTRADA","CASTILLO"};
    strcpy(cadena,ap[rand()%20]);
}

void nom_mujer(char cadena[])
{
    char nom[20][12] = {"MARIANA","DANIELA","MARIA","ALEJANDRA","DARYA","DIANA","JIMENA","KARINA","FERNANDA","SARA","CAROLINA","JULIA","LAURA","DANNA","KARLA","KSENIA","ELENA","GABRIELA","SOFIA","ALICIA"};
    strcpy(cadena,nom[rand()%20]);
}

void nom_hombre(char cadena[])
{
    char nom[20][12] = {"AARON","ALEJANDRO","ALBERTO","JUAN","PEDRO","DAVID","LUIS","FERNANDO","ESTEBAN","RODOLFO","RONALDO","RODRIGO","ANTONIO","ANGEL","MIGUEL","DANIEL","ARTURO","CRISTIAN","CARLOS","FRANCISCO"};
    strcpy(cadena,nom[rand()%20]);
}

Talum eliminar(Talum vect[],int n)
{
    system("CLS");
    int mtr, k = 0,i;
    Talum vect2[N];

    mtr = valid_num(300000, 399999, "Ingresa una matricula a eliminar: ");

    for (i = 0; i < n; i++)
    {
        if (mtr != vect[i].matric)
        {
            vect2[k] = vect[i];
            k++;
        }
    }

    if (k == n)
    {
        printf("\nLa matricula %d no existe",mtr);
        return vect[N];
    }
    else
    {
        printf("\nSe ha eliminado la matricula %d", mtr);
        n = k; 
        for (int i = 0; i < k; i++)
        {
            vect[i] = vect2[i];
        }
        printf("\n");
        system("PAUSE");
        return vect[k];
    }
}

void buscar(Talum vect[],int n)
{
    system("CLS");
    int mtr,x;

    mtr = valid_num(300000,399999,"Ingresa una matricula: ");

    x = busreg(vect,n,mtr);

    if (x != -1)
    {
        printf("\nLa matricula %d pertenece al alumno %s %s %s",mtr,vect[x].apat,vect[x].amat,vect[x].nombre);
    }
    else
    {
        printf("\nLa matricula no existe en el registro.");
    }
    printf("\n");
    system("PAUSE");
}

int busreg(Talum vect[], int n, int mtr)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(mtr == vect[i].matric)
        {
            return i;
        }
    }
    return -1;
}

void ordenar(Talum vect[], int m)
{
    int i, j, temp;

    for(i = 0; i < m-1; i++)
    {
        for(j = i+1; j < m; j++)
        {
            if (vect[j].matric < vect[i].matric)
            {
                temp = vect[i].matric;
                vect[i].matric = vect[j].matric;
                vect[j].matric = temp;
            }
        }
    }
}

