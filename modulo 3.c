#include<stdio.h>
#include<math.h>
int main (int argc, char * argv[])
{
	float a,b,c,D,Y,X1,X2;
	printf("una ecuacion de segundo grado se representa de la forma AX^2+BX+C \n");
	printf("Donde A, B, C son los coeficientes de la ecuacion \n");
	scanf("%f""%f""%f",&a,&b,&c);
	D= ((b*b)-4*a*c);
	{
		Y= sqrt ((b*b)-4*a*c);
		X1=(-b+Y)/(2*a);
		X2=(-b-Y)/(2*a);
		printf("la raice de la funcion son %.2f , %2f \n", X1,X2);
	}
	system ("PAUSE"); return 0;
}
