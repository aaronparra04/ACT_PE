/*******************************************************************************/
/* Parra Velarde Aaron Alejandro        372193                                 */
/* 15/Sep/2023                                                                 */
/* Programa que despliega un menu de funciones.                                */
/* PVAA_A06_P1_432                                                                */
/*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int msges();
void menu();
int menuciclo();

void Fibonacci (void);
void FiboFor (void);
void FiboDow (void);
void FiboWhile (void);

void Factorial (void);
void FactFor (void);
void FactDow (void);
void FactWhile (void);

void Digitos (void);
void DigitFor (void);
void DigitDow (void);
void DigitWhile (void);

int main()
{
  menu();

	return 0;
}

int msges()
{ int op;
  system ("CLS");
  printf ("   M  E   N   U \n");
  printf("1.- FIBONACCI \n");
  printf("2.- FACTORIAL \n");
  printf("3.- DIGITOS \n");
  printf("0.- SALIR  \n");
  printf("ESCOGE UNA OPCION: ");
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
              Fibonacci();
              break;
        case 2:
              Factorial();
              break;
        case 3:
              Digitos();
              break;

      }

    }while (op != 0);
}

void Fibonacci (void)
{
  system ("CLS");
  printf("   FIBONACCI\n");
  int opc;
  do
  {
    opc = menuciclo();
    switch (opc)
    {
      case 1:
        FiboFor();
        break;
      case 2:
        FiboWhile();
        break;
      case 3:
        FiboDow();
        break;
    }
    system ("PAUSE");
  }while(opc != 0);
}

void Factorial (void)
{

  system ("CLS");
  printf("   FACTORIAL\n");
  int opc;
  do
  {
    opc = menuciclo();
    switch (opc)
    {
      case 1:
        FactFor();
        break;
      case 2:
        FactWhile();
        break;
      case 3:
        FactDow();
        break;
    }
    system ("PAUSE");
  }while(opc != 0);
}

void Digitos (void)
{
  system ("CLS");
  printf("   DIGITOS\n");
  int opc;
  do
  {
    opc = menuciclo();
    switch (opc)
    {
      case 1:
        DigitFor();
        break;
      case 2:
        DigitWhile();
        break;
      case 3:
        DigitDow();
        break;
    }
    system ("PAUSE");
  }while(opc != 0);
}

int menuciclo()
{
  int opc;
  system ("CLS");

  printf("1.- FOR \n");
  printf("2.- WHILE \n");
  printf("3.- DO-WHILE \n");
  printf("0.- REGRESAR \n");
  printf("ESCOGE UNA OPCION: ");
  scanf ("%d",&opc);
  return opc;
}

void FiboFor(void)
{
  system ("CLS");
  int i, num, r = 0, a = -1, s = 1;
  printf("Cuantos numeros de la Serie de Fibonacci desea desplegar? ");
  scanf("%d",&num);

  for(i = 0; i < num; i++)
  {
    r = a + s;
    printf("\n%d", r);
    a = s;
    s = r;
  }
  printf("\n");
  system ("PAUSE");
  system ("CLS");
}

void FiboWhile(void)
{
  system ("CLS");
  int i = 0, num, r = 0, a = -1, s = 1;
  printf("¿Cuantos numeros de la Serie de Fibonacci desea desplegar?");
  scanf("%d",&num);

  while (i < num)
  {
    r = a + s;
    printf("\n%d", r);
    a = s;
    s = r;
    i++;
  }
  printf("\n");
  system ("PAUSE");
  system ("CLS");
}

void FiboDow(void)
{
  system ("CLS");
  int i = 0, num, r = 0, a = -1, s = 1;
  printf("¿Cuantos numeros de la Serie de Fibonacci desea desplegar?");
  scanf("%d",&num);

  do
  {
    r = a + s;
    printf("\n%d", r);
    a = s;
    s = r;

    i++;
  } while (i < num);
  printf("\n");
  system ("PAUSE");
  system ("CLS");
}

void FactFor(void)
{
  system ("CLS");
  int a = 1, r, num, i;
  printf("Ingrese un numero: ");
  scanf("%d",&num);

  if (num < 1)
  {
    r = 1;
  }

  for (i = 1; i < num; i++)
  {
    r = a * (i+1);
    printf("\n%d x %d = %d", a, i+1, r);
    a = r;
  }
  printf("\nEl factorial de %d es %d ", num, r);
  printf("\n");
  system ("PAUSE");
  system ("CLS");
}

void FactDow (void)
{
  system ("CLS");
  int a = 1, r, num, i = 1;
  printf("Ingrese un numero: ");
  scanf("%d",&num);

  if (num < 1)
  {
    r = 1;
  }

  do
  {
    r = a * (i+1);
    printf("\n%d x %d = %d", a, i+1, r);
    a = r;
    i++;
  } while (i < num);

  printf("\nEl factorial de %d es %d ", num, r);
  printf("\n");
  system ("PAUSE");
  system ("CLS");
}
void FactWhile (void)
{
  system ("CLS");
  int a = 1, r, num, i = 1;
  printf("Ingrese un numero: ");
  scanf("%d",&num);

  if (num < 1)
  {
    r = 1;
  }

  while (i < num)
  {
    r = a * (i+1);
    printf("\n%d x %d = %d", a, i+1, r);
    a = r;
    i++;
  }
  printf("\nEl factorial de %d es %d ", num, r);
  printf("\n");
  system ("PAUSE");
  system ("CLS");
}
void DigitFor (void)
{
  system ("CLS");
  int num, i, dig;

  printf("Ingrese un numero: ");
  scanf("%d",&num);
  dig = num;
  for (i = 0; dig > 0; i++)
  {
    dig = dig / 10;
  }
  printf("\nEl numero %d tiene %d cifras ", num, i);
  printf("\n");
  system ("PAUSE");
  system ("CLS");
}
void DigitDow (void)
{
  system ("CLS");
  int num, i = 0, dig;

  printf("Ingrese un numero: ");
  scanf("%d",&num);
  dig = num;
  do
  {
    dig = dig / 10;
    i++;
  } while (dig > 0);
  printf("\nEl numero %d tiene %d cifras ", num, i);
  printf("\n");
  system ("PAUSE");
  system ("CLS");
}
void DigitWhile (void)
{
  system ("CLS");
  int num, i = 0, dig;

  printf("Ingrese un numero: ");
  scanf("%d",&num);
  dig = num;

  while(dig > 0)
  {
    dig = dig / 10;
    i++;
  }
  printf("\nEl numero %d tiene %d cifras ", num, i);
  printf("\n");
  system ("PAUSE");
  system ("CLS");
}