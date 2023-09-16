/*******************************************************************************/
/* Parra Velarde Aaron Alejandro        372193                                 */
/* 15/Sep/2023                                                                 */
/* Programa que despliega un menu de funciones.                                */
/* PVAA_A06_P2_432                                                             */
/*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int msges();
void menu();

void Nivel (void);
void Tablas (void);
void NumRango (void);
void Peso (void);
void PromFinal (void);

int main()
{
  menu();

	return 0;
}

int msges()
{ int op;
  system ("CLS");
  printf ("   M  E   N   U \n");
  printf("\nESCOGE UNA OPCION: ");
  printf("\n");
  printf("1.- EXAMEN DE NIVELACION \n");
  printf("2.- TABLAS DE MULTIPLICAR \n");
  printf("3.- NUMEROS DENTRO UN RANGO \n");
  printf("4.- PESO PROMEDIO DE TURISTAS \n");
  printf("5.- PROMEDIO FINAL \n");
  printf("0.- SALIR  \n");
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
              Nivel();
              break;
        case 2:
              Tablas();
              break;
        case 3:
              NumRango();
              break;
        case 4:
              Peso();
              break;
        case 5:
              PromFinal();
              break;
      }
    }while (op != 0);

}

void Nivel (void)
{
  system ("CLS");
  int calif1, calif2, calif3, calif4, calif5, i, ac, prom;

  for(i = 0; i < 40; i++)
  {
    printf("\nDame la primera calificacion del alumno %d: ",i+1);
    scanf("%d",&calif1);
    printf("\nDame la segunda calificacion del alumno %d: ",i+1);
    scanf("%d",&calif2);
    printf("\nDame la tercera calificacion del alumno %d: ",i+1);
    scanf("%d",&calif3);
    printf("\nDame la cuarta calificacion del alumno %d: ",i+1);
    scanf("%d",&calif4);
    printf("\nDame la quinta calificacion del alumno %d: ",i+1);
    scanf("%d",&calif5);

    prom = (calif1 + calif2 + calif3 + calif4 + calif5) / 5;

    if (prom < 50)
    {
      ac += 1;
    }
  }
  printf("\n%d personas no tienen derecho a examen de nivelacion", ac);
  printf("\n");
  system ("PAUSE");
}

void Tablas (void)
{
  system ("CLS");
  int i;
  for(i = 1; i <= 10; i++)
  {
    printf("\nTabla del %d", i);

    printf("\n%d x 1 = %d ", i, i*1);
    printf("\n%d x 2 = %d ", i, i*2);
    printf("\n%d x 3 = %d ", i, i*3);
    printf("\n%d x 4 = %d ", i, i*4);
    printf("\n%d x 5 = %d ", i, i*5);
    printf("\n%d x 6 = %d ", i, i*6);
    printf("\n%d x 7 = %d ", i, i*7);
    printf("\n%d x 8 = %d ", i, i*8);
    printf("\n%d x 9 = %d ", i, i*9);
    printf("\n%d x 10 = %d ", i, i*10);
    printf("\n");
    system ("PAUSE");
    system ("CLS");
  }
  system ("PAUSE");
}

void NumRango (void)
{
  system ("CLS");
  int n, num,  i = 1, ac = 0, linf, lsup;

  printf("\nCuantos numeros quiere ingresar?: ");
  scanf("%d",&n);
  printf("\nIngrese el valor minimo en el rango: ");
  scanf("%d",&linf);
  printf("\nIngrese el valor maximo en el rango : ");
  scanf("%d",&lsup);

  while(i <= n)
  {
    printf("\nDame el valor %d: ",i);
    scanf("%d",&num);

    if (num >= linf)
    {
      if (num <= lsup)
      {
        ac += num;
      }
      else
      {
        printf("Numero fuera del rango.");
      }
    }
    else
    {
      printf("Numero fuera del rango.");
    }
    i++;
  }

  printf("\nLa suma de los numeros es %d", ac);
  printf("\nLa media de los numeros es %d", ac/i);
  printf("\n");
  system ("PAUSE");
}

void Peso(void)
{
  system ("CLS");
  int i = 0, j = 0, peso, ptotal = 0;

  while (i < 10)
  {
    printf("\nIngrese el peso del turista %d (kg): ",i+1);
    scanf("%d",&peso);
    ptotal += peso;
    if (ptotal >= 805)
    {
      i = 10;
    }
    i++;
    j++;
  }

  printf("\nEl peso promedio por turista es %d", ptotal / j);

  if(i == 10)
  {
    printf("\nSe ha cubierto la capacidad maxima de turistas.");
  }
  else
  {
    printf("\nSe ha cubierto el peso maximo de la embarcacion.");
  }
  printf("\n");
  system ("PAUSE");
}

void PromFinal(void)
{
  system ("CLS");
  int calif1, calif2, calif3, prom, i;

  printf("\nDame la califiacion del parcial 1: ");
  scanf("%d",&calif1);
  printf("\nDame la califiacion del parcial 2: ");
  scanf("%d",&calif2);
  printf("\nDame la califiacion del parcial 3: ");
  scanf("%d",&calif3);

  prom = (calif1 + calif2 + calif3) / 3;

  if (prom < 60)
  {
    for (i = 1; i <= 2; i++)
    {
      printf("Repetir Materia.");
      printf("\nDame la califiacion del parcial 1 de tu intento %d: ",i+1);
      scanf("%d",&calif1);
      printf("\nDame la califiacion del parcial 2 de tu intento %d: ",i+1);
      scanf("%d",&calif2);
      printf("\nDame la califiacion del parcial 3 de tu intento %d: ",i+1);
      scanf("%d",&calif3);
      prom = (calif1 + calif2 + calif3) / 3;

      if (prom > 60)
      {
        printf("\nAprobado");
        i = 3;
      }
      else
      {
        if (i == 2)
        {
          printf("\nBaja Temporal");
        }
      }
    }
  }
  else
  {
    printf("\nAprobado");
  }
  system ("PAUSE");
}