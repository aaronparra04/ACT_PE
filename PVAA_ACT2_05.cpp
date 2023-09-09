/**********************************************************************/
/* Aaron Alejandro Parra Velarde        372193                        */
/* 06/Sep/2023                                                        */
/* Algoritmo que calcula el medio de tres numeros.                    */
/* PVAA_A02_05_432                                                    */
/**********************************************************************/

#include <stdio.h>
#include <conio.h>

int main()
{
	int n1, n2, n3, medio;
	
	printf ( "\nDame el primer numero: ");
    scanf ("%d", &n1);
    
    printf ( "\nDame el segundo numero: ");
    scanf ("%d", &n2);
    
    printf ( "\nDame el tercer numero: ");
    scanf ("%d", &n3);
    
    if ((n1 > n2 && n1 < n3) || (n1 < n2 && n1 > n3))
	{
		medio = n1;
	}
	else
	{
		if ((n2 < n1 && n2 > n3) || (n2 > n1 && n2 < n3))
		{
			medio = n2;
		}
		else
		{
			medio = n3;
		}
	}
    
    printf ( "\nEl numero de en medio es: %d", medio);
    
    getch();
    return 0;
}


