#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int dia, mes;
    char nombre[30];
    
    printf("ingrese el nombre: ");
    scanf("%s",&nombre);
    fflush(stdin);
    printf ("Ingresa el valor de dia: ");
    scanf ("%d", &dia);
    fflush(stdin);
    printf ("Ingresa el valor de mes: ");
    scanf ("%d", &mes);
    fflush(stdin);
    
    if((dia>=21&&mes==3)||(dia<=20&&mes==4)){
	
	    printf("%s",nombre);
        printf ("\nAries\n");
        printf("Relacion: deberas disfrutar de las sorpresas que tiene la vida para ti");
        printf("\ncolor: rojo");
        printf("\nnumero: 16-61");
        
		}
		
    if((dia>=24&&mes==9)||(dia<=23&&mes==10)){
	    printf("%s",nombre);
        printf("\nLibra\n");
        printf("Relacion: relaciones de una forma estable");
        printf("\ncolor: chocolate");
        printf("\nnumero: 45-75");
        
		}
		
    if((dia>=21&&mes==4)||(dia<=21&&mes==5)){
    	
	    printf("%s",nombre);
        printf ("\nTauro\n");
        printf("Relacion: esta en un dia en el cual podras aprender de la vida");
        printf("\ncolor: verde");
        printf("\nnumero: 16-61");
    
	}
        
    if((dia>=24&&mes==10)||(dia<=22&&mes==11)){
	    printf("%s",nombre);
        printf ("\nEscorpio\n");
        printf("Relacion: tener encuentros cordiales");
        printf("\ncolor: blanco");
        printf("\nnumero: 88-69");
        
		}
    if((dia>=22&&mes==5)||(dia<=21&&mes==6)){
	    printf("%s",nombre);
        printf ("\nGeminis\n");
        printf("Relacion: sera un dia para poder calmar el ambiente");
        printf("\ncolor: rosado");
        printf("\nnumero: 17-71");
         
        
		}
        
    if((dia>=23&&mes==11)||(dia<=21&&mes==12)){
     	printf("%s",nombre);
        printf ("\nSagitario\n");
        printf("Relacion: hay forma de organizar tu economia");
        printf("\ncolor: amarillo");
        printf("\nnumero: 57-89");
        
		}
        
    if((dia>=21&&mes==6)||(dia<=23&&mes==7)){
	    printf("%s",nombre);
        printf ("\nCancer\n");
        printf("Relacion: es un dia para poder sentirte cerca de las personas queridas");
        printf("\ncolor: purpura");
        printf("\nnumero: 21-12");
		}
        
    if((dia>=22&&mes==12)||(dia<=20&&mes==1)){
	    printf("%s",nombre);
        printf ("\nCapricornio\n");
        printf("Relacion: tomar la iniciativa a los compromisos");
        printf("\ncolor: celeste");
        printf("\nnumero: 78-98");
		}
		
    if((dia>=24&&mes==7)||(dia<=23&&mes==8)){
	    printf("%s",nombre);
        printf ("\nLeo\n");
        printf("Relacion: estara el amor muy a la vista");
        printf("\ncolor: azul");
        printf("\nnumero: 15-24");
        
		}
		
    if((dia>=21&&mes==1)||(dia<=19&&mes==2)){
	    printf("%s",nombre);
        printf ("\nAcuario\n");
        printf("Relacion: solucionar emociones sin resolver");
        printf("\ncolor: Morado");
        printf("\nnumero: 95-56");
		}
		
    if((dia>=24&&mes==8)||(dia<=23&&mes==9)){
		printf("%s",nombre);
        printf ("\nVirgo\n");
        printf("Relacion: para encontrar a una persona muy especial");
        printf("\ncolor: crema");
        printf("\nnumero: 43-74");
        
		}
		
    if((dia>=20&&mes==2)||(dia<=20&&mes==3)){
     	printf("%s",nombre);
        printf ("\nPiscis\n");
        printf("Relacion: reallizar planes que llevas tiempo planeado");
        printf("\ncolor: beige");
        printf("\nnumero: 94-64");
        
		}
        
    putchar ('\n');
    system ("pause");
    return 0;
}
