
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Ejercicio aprenderaprogramar.com
int main() {
	int a,b,c,d,e;
    char nombre1[100],nombre2[100],nombre3[100],nombre4[100],nombre5[100];
    
	printf("\t\t\tHola amigos soy yaremis y te dire quien tiene el nombre mas corto\n\n");
	
	printf("\tIngresa 5 nombre completo y te dare la respuesta\n\n");
	 
    printf("Introduce Nombre Completo 1:");
    gets(nombre1);
    printf("Introduce Nombre Completo 2:");
    gets(nombre2);
    printf("Introduce Nombre Completo 3:");
    gets(nombre3);
    printf("Introduce Nombre Completo 4:");
    gets(nombre4);
    printf("Introduce Nombre Completo 5:");
    gets(nombre5);
    
    a=strlen(nombre1);
    b=strlen(nombre2);
    c=strlen(nombre3);
    d=strlen(nombre4);
    e=strlen(nombre5);
    
    
    if(a<b & a<c & a<d & a<e)
    printf("Yo soy el nombre mas Corto: %s",nombre1);
    
    else if(b<a & b<c & b<d & b<e)
    printf("Yo soy el nombre mas Corto: %s",nombre2);
    
    else if(c<a & c<b & c<d & c<e)
    printf("Yo soy el nombre mas Corto: %s",nombre3);
    
    else if(d<a & d<b & d<c & d<e)
    printf("Yo soy el nombre mas Corto: %s",nombre4);
    
    else if(e<a & e<b & e<c & e<d)
    printf("Yo soy el nombre mas Corto: %s",nombre5);
    
    return(0);
}
