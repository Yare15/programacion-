#include <stdio.h>
int main ()
{
	int tabla;
	int i;
	printf("\nDigite el numero de tabla:");
	scanf("%i", &tabla);
	
	for(i=1; i<=10; i++)
	{
		printf("\n%i * %i = %i", tabla, i, tabla*i);
	}
	return 0;
}
