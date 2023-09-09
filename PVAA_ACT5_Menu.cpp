/*******************************************************************************/
/* Parra Velarde Aaron Alejandro        372193                                 */
/* 08/Sep/2023                                                                 */
/* Programa que despliega un menu de funciones.                                */
/* PVAA_A05_432                                                                */
/*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 35

int msges();
void menu();
void Num (void);
void Numrand (void);
void Nrand (void);
void Tablas (void);

int main()
{
   menu();

	return 0;
}

int msges()
{ int op;
  system ("CLS");
  printf ("   M  E   N   U \n");
  printf("1.- Numeros de forma descendente \n");
  printf("2.- 40 numeros aleatorios entre 0 y 200 \n");
  printf("3.- Mayor y menor de una serie aleatoria de numeros \n");
  printf("4.- Tablas de multiplicar de un numero \n");
  printf("0.- Salir  \n");
  printf("Elige una opcion: ");
  scanf ("%d",&op);
  return op;
}

void menu()
{
  int op;
  do{
      op=msges();
      switch (op)
      {
        case 1:
              Num();
              break;
        case 2:
              Numrand();
              break;
        case 3:
              Nrand();
              break;
        case 4:
              Tablas();
              break;
      }

    }while (op != 0);


}

void Num (void)
{
  int n,i;
  system ("CLS");

  printf("\nIngrese un numero: ");
  scanf("%d",&n);

  printf("\nEl orden descendente es: ");
  for (i = n; i > 0; i--)
  {
    printf("\n%d", i);
  }

  system ("PAUSE");
}

void Numrand (void)
{
  int nrand, i, j, k, acpar, acimpar;
  system ("CLS");
  j = 0;
  k = 0;

  srand(time(NULL));
    
  for (i = 0; i < 40; i++)
  {
    nrand = rand() % 201;
    printf("\n%d", nrand);
    
    if (nrand % 2 == 0)
    {
      printf("\nEl numero es par.");
      j += 1;
      acpar += nrand;
    }
    else
    {
      printf("\nEl numero es impar.");
      k += 1;
      acimpar += nrand;
    }
  }

  printf("\nSe encontraron %d numeros pares.", j);
  printf("\nSe encontraron %d numeros impares.", k);

  printf("\nLa suma de numeros pares es %d.", acpar);
  printf("\nLa suma de numeros impares es %d.", acimpar);
  system ("PAUSE");
}

void Nrand (void)
{
  int nrand, i, mayor, menor, nant;
  system ("CLS");

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
  system ("PAUSE");
}

void Tablas (void)
{
  int n, result, i;
  system ("CLS");

  printf("\nIngrese un numero entre el 1 y el 20: ");
  scanf("%d",&n);

  if (n > 0 && n <= 20)
  {
    printf("\ntabla del %d : ", n);
    for (i = 1; i <= 10; i++)
    {
      result = n * i;
      printf("\n %d x %d = %d", n, i, result);
    }
  }

  system ("PAUSE");
}