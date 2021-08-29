#include <stdlib.h>
#include <stdio.h>
#include <math.h>


float hermiteRec(int n, float num)
{
	if(n==0){
		return 1;
	}
	else if (n==1)
	{
		return 2*num;
	}
	else
	{
		return 2*num*hermiteRec((n-1),num) - 2*(n-1)*hermiteRec((n-2),num); 
	}
	
}

int main()
{
	int n;
	float x;
	printf ("\t\t\tPOLINOMIOS DE HERMITE\n\n");	    
	printf("Escriba un grado de polinomio: ");
	scanf("%d", & n);
	printf("Escriba el numero real: ");
	scanf("%f", & x);
	printf("\n\n El resultado es: %.2f", hermiteRec(n,x));
}