#include<stdio.h>
#define MAX 30


int main(){
	
	int num;
	
	printf("\t\t\t\t\t\t\t Empresa NASA S.A");
	
	
	printf("\n\ningrese la cantidad de trajadores: ");
	scanf("%i",&num);
	fflush(stdin);
	
	for(int i=0; i<num; i++){
		
		char nombre[MAX];
		int numerol,numerom,numeromi,numeroj,numerov,numerototal=0;
		float ventasl, ventasm , ventasmi, ventasj, ventasv, sumal=0.0;
		float sumam=0.0,sumami=0.0,sumaj=0.0,sumav=0.0;
		float sumatotal=0.0;
		
		
		printf("\n\ningrese el nombre del tabajador #%i:",i+1);
		scanf("%s",nombre);
		fflush(stdin);
		
		printf("ingrese la cantidad de productos que el trabajador vendio el lunes: ");
		scanf("%i",&numerol);
		fflush(stdin);
		
		for(int l=0; l<numerol; l++){
			printf("ingrese el valor del producto #%i: ",l+1);
			scanf("%f",&ventasl);
			fflush(stdin);
			
			sumal+=ventasl;
			
		}
		
		printf("ingrese la cantidad de productos que el trabajador vendio el martes: ");
		scanf("%i",&numerom);
		fflush(stdin);
		
		for(int m=0; m<numerom; m++){
			printf("ingrese el valor del producto #%i: ",m+1);
			scanf("%f",&ventasm);
			fflush(stdin);
			
			sumam+=ventasm;
			
		}
		
		printf("ingrese la cantidad de productos que el trabajador vendio el miercoles: ");
		scanf("%i",&numeromi);
		fflush(stdin);
		
		for(int mi=0; mi<numeromi; mi++){
			printf("ingrese el valor del producto #%i: ",mi+1);
			scanf("%f",&ventasmi);
			fflush(stdin);
			
			sumami+=ventasmi;
			
		}
		
		printf("ingrese la cantidad de productos que el trabajador vendio el jueves: ");
		scanf("%i",&numeroj);
		fflush(stdin);
		
		for(int j=0; j<numeroj; j++){
			printf("ingrese el valor del producto #%i: ",j+1);
			scanf("%f",&ventasj);
			fflush(stdin);
			
			sumaj+=ventasj;
			
		}
		
		printf("ingrese la cantidad de productos que el trabajador vendio el viernes: ");
		scanf("%i",&numerov);
		fflush(stdin);
		
		for(int v=0; v<numerov; v++){
			printf("ingrese el valor del producto #%i: ",v+1);
			scanf("%f",&ventasv);
			fflush(stdin);
			
			sumav+=ventasv;
			
		}
		
		sumatotal+=sumal+sumam+sumami+sumaj+sumav;
		numerototal+=numerol+numerom+numeromi+numeroj+numerov;
		printf("\n\nEl trabajador %s ",nombre);
		printf("\nvendio un total de %i productos de lunes a viernes: ",numerototal);
		printf("\nobteniendo un total de %f balboas",sumatotal);
		
		
		
	
	}
	
	
	
}
