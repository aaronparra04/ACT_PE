/*******************************************************************************/
/* Parra Velarde Aaron Alejandro        372193                                 */
/* 04/Oct/2023                                                                 */
/* Programa que genera el CURP de una persona.                                 */
/* PVAA_A09_3/4_432_01                                                         */
/*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arzat.h"

char iniciales(char apat[], char amat[], char nombre[], char CURP[]);
char fecha(char yr[], char mes[], char dia[], char CURP[]);
char sexo(int sx, char CURP[]);
int shtat();
char letrasEst(int est,char CURP[]);
char cons(char apat[],char amat[],char nombre[],char yr[],char CURP[]);
void numaleat(char CURP[]);
char excep(char apat[], char amat[], char nombre[], char CURP[], int sx);
char mariajose(char cadena[],char nombre[],char CURP[]);
char buscanom(char CURP[]);

int main()
{
    char apat[30],amat[30],nombre[30],CURP[20],yr[5],mes[3],dia[3];
    int opc,est,i=0,sx;
    srand(time(NULL));
    do
    {
        system("CLS");
        printf("\nApellido Paterno: ");
        fflush(stdin);
        gets(apat);
        mayus(apat);

        printf("\nEn caso de no tener segundo apellido, presione 0. ");
        printf("\nApellido Materno: ");
        gets(amat);
        mayus(amat);
        
        system("CLS");

        printf("\nNombre(s): ");
        gets(nombre);
        mayus(nombre);

        system("CLS");

        printf("\nAño de nacimiento: ");
        gets(yr);
        printf("\nMes de nacimiento: ");
        gets(mes);
        printf("\nDia de nacimiento: ");
        gets(dia);
        system("CLS");

        sx = valid_num(0,1,"\nSexo (1-Hombre, 0-Mujer): ");
        
        system("CLS");
        est = shtat();
        
        iniciales(apat,amat,nombre,CURP);
        fecha(yr,mes,dia,CURP);
        sexo(sx,CURP);
        letrasEst(est,CURP);
        cons(apat,amat,nombre,yr,CURP);
        excep(apat,amat,nombre,CURP,sx);
        buscanom(CURP);
        system("CLS");

        if (i == 0)
        {
            puts(CURP);
        }
        else
        {
            CURP[17] = CURP[18];
            CURP[18] = '\0';
            puts(CURP);
        }
        system("PAUSE");
        opc = valid_num(0,9999,"\nPara salir, presione 0. Para continuar, cualquier numero");
        i++;
    }while(opc != 0);
    return 0;
}

char iniciales(char apat[], char amat[], char nombre[], char CURP[])
{
    int i = 0, j = 0;
// apellido paterno
    if(apat[0] >= 65 && apat[0] <= 90)
    {
        CURP[0] = apat[0];
    }
    else
    {
        CURP[0] = 'X';
    }

    if (apat[0] != 'A' && apat[0] != 'E' && apat[0] != 'I' && apat[0] != 'O' && apat[0] != 'U')
    {
        if (apat[1] == 'A' || apat[1] == 'E' || apat[1] == 'I' || apat[1] == 'O' || apat[1] == 'U')
        {
            CURP[1] = apat[1];
        }
        else
        {
            do
            {
                CURP[1] = apat[i+1];
                i++;
            }while(apat[i] != 'A' && apat[i] != 'E' && apat[i] != 'I' && apat[i] != 'O' && apat[i] != 'U');
        }
        
    }
    else
    {
        do
        {
            CURP[1] = apat[j+1];
            j++;
        }while(apat[j] != 'A' && apat[j] != 'E' && apat[j] != 'I' && apat[j] != 'O' && apat[j] != 'U');
    }
// apellido materno
    if (amat[0] >= 65 && amat[0] <= 90)
    {
        CURP[2] = amat[0];
    }
    else
    {
        
        CURP[2] = 'X';
    }
    
//nombre
    CURP[3] = nombre[0];
    return CURP[20];
}

char fecha(char yr[], char mes[], char dia[], char CURP[])
{
    CURP[4] = yr[2];
    CURP[5] = yr[3];

    if(tam_cadena(mes) != 1)
    {
        CURP[6] = mes[0];
        CURP[7] = mes[1];
    }
    else
    {
        CURP[6] = '0';
        CURP[7] = mes[0];
    }

    if(tam_cadena(dia) != 1)
    {
        CURP[8] = dia[0];
        CURP[9] = dia[1];
    }
    else
    {
        CURP[8] = '0';
        CURP[9] = dia[0];
    }
    return CURP[20];
}

char sexo(int sx, char CURP[])
{
    if (sx == 1)
    {
        
        CURP[10] = 'H';
    }
    else
    {
        CURP[10] = 'M';
    }
    return CURP[20];
}

int shtat()
{
    int est;
    printf("\nSi nacio en el extranjero, presione '0': ");
    printf("\n1.-Aguascalientes");
    printf("\n2.-Baja California");
    printf("\n3.-Baja California Sur");
    printf("\n4.-Campeche");
    printf("\n5.-Chiapas");
    printf("\n6.-Chihuahua");
    printf("\n7.-Ciudad de Mexico");
    printf("\n8.-Coahuila");
    printf("\n9.-Colima");
    printf("\n10.-Durango");
    printf("\n11.-Guanajuato");
    printf("\n12.-Guerrero");
    printf("\n13.-Hidalgo");
    printf("\n14.-Jalisco");
    printf("\n15.-Estado de Mexico");
    printf("\n16.-Michoacan");
    printf("\n17.-Morelos");
    printf("\n18.-Nayarit");
    printf("\n19.-Nuevo Leon");
    printf("\n20.-Oaxaca");
    printf("\n21.-Puebla");
    printf("\n22.-Queretaro");
    printf("\n23.-Quintana Roo");
    printf("\n24.-San Luis Potosi");
    printf("\n25.-Sinaloa");
    printf("\n26.-Sonora");
    printf("\n27.-Tabasco");
    printf("\n28.-Tamaulipas");
    printf("\n29.-Tlaxcala");
    printf("\n30.-Veracruz");
    printf("\n31.-Yucatan");
    printf("\n32.-Zacatecas");
    est = valid_num(0,32,"\nEntidad de Nacimiento: ");
    return est;
}

char letrasEst(int est,char CURP[])
{
    switch(est)
    {
        case 0:
        CURP[11] = 'N';
        CURP[12] = 'E';
        break;

        case 1:
        CURP[11] = 'A';
        CURP[12] = 'S';
        break;

        case 2:
        CURP[11] = 'B';
        CURP[12] = 'C';
        break;

        case 3:
        CURP[11] = 'B';
        CURP[12] = 'S';
        break;

        case 4:
        CURP[11] = 'C';
        CURP[12] = 'C';
        break;

        case 5:
        CURP[11] = 'C';
        CURP[12] = 'S';
        break;

        case 6:
        CURP[11] = 'C';
        CURP[12] = 'H';
        break;

        case 7:
        CURP[11] = 'D';
        CURP[12] = 'F';
        break;

        case 8:
        CURP[11] = 'C';
        CURP[12] = 'L';
        break;

        case 9:
        CURP[11] = 'C';
        CURP[12] = 'M';
        break;

        case 10:
        CURP[11] = 'D';
        CURP[12] = 'G';
        break;

        case 11:
        CURP[11] = 'G';
        CURP[12] = 'T';
        break;

        case 12:
        CURP[11] = 'G';
        CURP[12] = 'R';
        break;

        case 13:
        CURP[11] = 'H';
        CURP[12] = 'G';
        break;

        case 14:
        CURP[11] = 'J';
        CURP[12] = 'C';
        break;

        case 15:
        CURP[11] = 'M';
        CURP[12] = 'C';
        break;

        case 16:
        CURP[11] = 'M';
        CURP[12] = 'N';
        break;

        case 17:
        CURP[11] = 'M';
        CURP[12] = 'S';
        break;

        case 18:
        CURP[11] = 'N';
        CURP[12] = 'T';
        break;

        case 19:
        CURP[11] = 'N';
        CURP[12] = 'L';
        break;

        case 20:
        CURP[11] = 'O';
        CURP[12] = 'C';
        break;

        case 21:
        CURP[11] = 'P';
        CURP[12] = 'L';
        break;

        case 22:
        CURP[11] = 'Q';
        CURP[12] = 'O';
        break;

        case 23:
        CURP[11] = 'Q';
        CURP[12] = 'R';
        break;

        case 24:
        CURP[11] = 'S';
        CURP[12] = 'P';
        break;

        case 25:
        CURP[11] = 'S';
        CURP[12] = 'L';
        break;

        case 26:
        CURP[11] = 'S';
        CURP[12] = 'R';
        break;

        case 27:
        CURP[11] = 'T';
        CURP[12] = 'C';
        break;

        case 28:
        CURP[11] = 'T';
        CURP[12] = 'S';
        break;

        case 29:
        CURP[11] = 'T';
        CURP[12] = 'L';
        break;

        case 30:
        CURP[11] = 'V';
        CURP[12] = 'Z';
        break;

        case 31:
        CURP[11] = 'Y';
        CURP[12] = 'N';
        break;

        case 32:
        CURP[11] = 'Z';
        CURP[12] = 'S';
        break;
    }
    return CURP[20];
}

char cons(char apat[],char amat[],char nombre[],char yr[],char CURP[])
{
    int i = 1, j = 1, k = 1;
    do
    {
        CURP[13] = apat[i];
        i++;
    } while(apat[i-1] == 'A' || apat[i-1] == 'E' || apat[i-1] == 'I' || apat[i-1] == 'O' || apat[i-1] == 'U');

    if (amat[0] == '0')
    {
        CURP[14] = 'X';
    }
    else
    {
        do
        {
            if (amat[j+1] == 'A' || amat[j+1] == 'E' || amat[j+1] == 'I' || amat[j+1] == 'O' || amat[j+1] == 'U')
            {
                CURP[14] = 'X';
            }
            else
            {
                CURP[14] = amat[j+1];
            }
            j++;
        } while(amat[j] == 'A' && amat[j] == 'E' && amat[j] == 'I' && amat[j] == 'O' && amat[j] == 'U');
    }

    do
    {
        CURP[15] = nombre[k];
        k++;
    } while(nombre[k-1] == 'A' || nombre[k-1] == 'E' || nombre[k-1] == 'I' || nombre[k-1] == 'O' || nombre[k-1] == 'U');

    if (yr[0] == '1' && yr[1] == '9')
    {
        CURP[16] = '0';
    }
    else
    {
        CURP[16] = 'A';
    }
    numaleat(CURP);
    return CURP[20];
}

void numaleat(char CURP[])
{
    const char num[10][2] = {"0","1","2","3","4","5","6","7","8","9"};
    strcat(CURP,num[rand()%9]);
}

char excep(char apat[], char amat[], char nombre[], char CURP[], int sx)
{
    int i=0, j=0,v=0,k,r=0,jk=0;
    // MARIA Y JOSE
    char maria[7] = {"MARIA"};
    char jose[5] = {"JOSE"};
    char dela[6] = {"DE LA"};
    char ap[6];
     //MARIA
    if (sx == 0)
    {
        mariajose(nombre,CURP,maria);
    }
    else //JOSE
    {
        mariajose(nombre,CURP,jose);
    }
//Apellido DE LA...
    for(i = 0; i < tam_cadena(apat);i++)
    {
        j = 0;
        while(dela[j] != '\0')
        {
            if(dela[j] == apat[i+j])
            {
                v++;
            }
            j++;
        };

        if (v == tam_cadena(dela))
        {
            CURP[0] = apat[tam_cadena(dela)+1];
            CURP[1] = apat[tam_cadena(dela)+2];
            k = tam_cadena(dela) + 2;
            for (k ;apat[k] != '\0';k++)
            {
                ap[r] = apat[k];
                r++;
            }

            do
            {
                CURP[13] = ap[jk];
                jk++;
            } while(ap[jk-1] == 'A' || ap[jk-1] == 'E' || ap[jk-1] == 'I' || ap[jk-1] == 'O' || ap[jk-1] == 'U');
        }
    }
    return CURP[20];
}

int buscapalabra(char cadena[],char CURP[])
{
    int i, j,v;
    for(i = 0; i < tam_cadena(CURP);i++)
    {
        j = 0;
        while(cadena[j] != '\0')
        {
            if(cadena[j] == CURP[i+j])
            {
                v++;
            }
            j++;
        };

        if (v == tam_cadena(cadena))
        {
            i = tam_cadena(cadena);
            return v;
        }
        else
        {
            v = 0;
        }
    }
    return -1;
}

char buscanom(char CURP[])
{
    int i=0,j=0,k;
    char obsc[40][5] = {"BUEY","CACA","CAGA","CAGO","CAKA","COGE","CULO","COLA","FALO","JOTO","COLA","LOKA",
    "LOCA","LOCO","LOKO","MION","MEON","MIAR","MOCO","NACA","NACO","PEDA","PEDO","PENE","PIPI","PITO","PUTO",
    "PUTA","POPO","QULO","RATA","ROBO","ROBA","SENO","TETA","VACA","VAGA","VAGO","WUEI","VUEY"};
    char ob[5];
    for (i = 0;i < 40; i++)
    {
        for (j = 0; j < 5; j++)
        {
            ob[j] = obsc[i][j];
            k = buscapalabra(ob,CURP);
            if (k != -1)
            {
                CURP[1] = 'X';
            }
        }
    }
   return CURP[20];
}

char mariajose(char nombre[],char CURP[],char cadena[])
{
    int i, j,v,k;
    for(i = 0; i < tam_cadena(nombre);i++)
    {
        j = 0;
        while(cadena[j] != '\0')
        {
            if(cadena[j] == nombre[i+j])
            {
                v++;
            }
            j++;
        };

        if (v == tam_cadena(cadena))
        {
            if(tam_cadena(nombre) > tam_cadena(cadena))
            {
                CURP[3] = nombre[tam_cadena(cadena)+1];
                k = tam_cadena(cadena)+1;
                do
                {
                    CURP[15] = nombre[k];
                    k++;
                } while(nombre[k-1] == 'A' || nombre[k-1] == 'E' || nombre[k-1] == 'I' || nombre[k-1] == 'O' || nombre[k-1] == 'U');

            }
            else
            {
                CURP[3] = nombre[0];
            }
            i = tam_cadena(nombre);
        }
        else
        {
            v = 0;
        }
    }

    if (v != tam_cadena(cadena))
    {
        CURP[3] = nombre[0];
    }
    return CURP[20];
}
