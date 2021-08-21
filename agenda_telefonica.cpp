#include<stdio.h>
#include<stdlib.h>
#include<string.h>



#define MAX 50

struct dato{
	int dato;
	char nombre[MAX];
	char apellido[MAX];
	char correo[MAX];
	struct dato *ligaizq;
	struct dato *ligader;
};

typedef struct dato nodo;

void *creamemoria(int n);
nodo *creando();
nodo *liberamemoria_der(nodo *p);
nodo *creacontacto();
void recorreiterativo_der(nodo *p); 
nodo *busqueda_de_contacto(nodo *p, char nombre[],char apellido[]); 
nodo *eliminax(nodo *p, nodo *f, char nombre[],char apellido[]); 
nodo *ultimonodo(nodo *p);
void  guardarlista(nodo *p);
nodo *cargarlista(nodo *p);

void error(const char *s);


int main(){
	
	nodo *p= NULL,*q=NULL;
	nodo *f=NULL;
	char nombre[MAX], apellido[MAX],*nombre_arch;
	int opt,i,t;
	
	do{
		system("CLS");
		printf("1.crear contacto\n2.recorrer lista");
		printf("\n3.elimina contacto\n4.busqueda de contacto");
		printf("\n5.guardar contacto\n6.cargar contacto\n7.salir");
		printf("\nque opcion desea escoger: ");
		scanf("%i",&opt);
		fflush(stdin);
		switch(opt){
			case 1: if(p != NULL)
			    p=liberamemoria_der(p);
			    p=creacontacto();
			    break;
			
			case 2:
				recorreiterativo_der(p);
		        getchar();
		        break;
		    
		    case 3: if(p != NULL){
		    	printf("\ningrese el nombre: ");
		    	i=scanf("%s",nombre);
				fflush(stdin);
				printf("ingrese el apellido: ");
				t= scanf("%s",apellido);
				printf("\n");
				f= ultimonodo(p);
				p=eliminax(p,f,nombre,apellido);
				printf("\nEnter para continuar...");
				getchar();
			}
			else
			puts("la agenta esta vacia");
			getchar();
			break;
			
			case 4: if(p != NULL)
			    {
			    	printf("ingrese el nombre: ");
			    	i=scanf("%s",nombre);
			    	fflush(stdin);
			    	printf("ingrese el apellido: ");
			    	scanf("%s",apellido);
			    	fflush(stdin);
			    	p=busqueda_de_contacto(p,nombre,apellido);
			    	printf("\nEnter para continuar...");
			    	getchar();
				}
				else
			    puts("la agenta esta vacia");
			    getchar();
				break;
				
			case 5: if(p!=NULL){ 
				guardarlista (p);
			}
			else
			
			getchar;	
			break;
			
			case 6:if(p!=NULL){
				cargarlista(p);
			}
			break;
		
		} 
		
		
	}while(opt != 7);
	
	
}
nodo *ultimonodo(nodo *p){
	nodo *q;
			
			for( q=p; q->ligader != NULL; q=q->ligader);
			 /* printf("\n\n");
			   printf("%s",q->nombre);
			   printf("  ");
	           printf("%i",q->dato);
	           getchar();*/
			return(q);
	
}

nodo *creanodo(){
	return (nodo *)creamemoria(sizeof(nodo));
}


void *creamemoria(int n){
	
	void *p= (int *)malloc(n);
	if(p == NULL){
		puts("lo siento, no hay memoria disponible");
		getchar();
		exit(1);
	}
}

nodo *liberamemoria_der(nodo *p)
{ 	
	nodo *q = NULL;
	while( p != NULL)
	{
		q=p;
		p=p->ligader;
		free(q);
		
	}
printf("\n\n\t\t La memoria ha sido liberada");	
return( p);
}


 nodo *creacontacto()
{
	
	
	char i,j,k,salir[]="salir" ;
	nodo *p, *q;	
	
	
	p= creanodo();	
	printf("\n Introduzca el nombre: ");
	scanf("%s",&p->nombre);
	fflush(stdin);

	if( strcmpi(p->nombre,salir) != 0)
	{
		 printf("ingrese el apellido: ");
         scanf("%s",&p->apellido);
       	 fflush(stdin);
       	 
		 printf("\n Introduzca el numero: ");
	     scanf("%i",&p->dato);
	     fflush(stdin);
	     
	     printf("intdroduzca el correo electronico: ");
	     scanf("%s",&p->correo);
	     fflush(stdin);
		 p->ligader = NULL;
		 p->ligaizq = NULL;		 
		 
		 do
		 {
		 	q= creanodo();
		 	printf("\n Introduzca el nombre: ");
	        scanf("%s",&q->nombre);
	        fflush(stdin);
	        
	          if( strcmpi(q->nombre,salir))
	            { 
	              
	              printf("\n Introduzca el apellido: ");
	              scanf("%s",&q->apellido);
	              fflush(stdin);
	              
	              printf("\n Introduzca el numero: ");
            	  scanf("%i",&q->dato);
            	  fflush(stdin);
            	  
            	  printf("intdroduzca el correo electronico: ");
	              scanf("%s",&q->correo);
	              fflush(stdin);
			    
				  q->ligader = p;
			      p->ligaizq = q;
				  q->ligaizq = NULL;
				  p=q;
		        } 
			 else
			     {
			     	free(q);
			     	break;
				  }				   
	}while(strcmpi(q->nombre,salir) != 0  );
	
   }
   else
       {
   	    free(p);
   	    return(NULL);
      }
   q=p;
   
   return p;  
}  


	
void recorreiterativo_der(nodo *p)
{
	nodo *q;  
	if( p != NULL)
		{
			printf("\n\n");
			
			for( q=p; q != NULL; q=q->ligader){
			   printf("\n\n");
			   printf("%s %s  ",q->nombre,q->apellido);
	           printf("%i",q->dato);
	           printf("%s  ",p->correo);
	           
			}
	           
			
	//	printf("\n\n");			
		}
	else
		    printf("\n\n\t\t La agenda esta vacia");
	
	return;
	
	}
	
nodo *busqueda_de_contacto(nodo *p, char nombre[],char apellido[]){
  
  nodo *q;
  
  q=p;

  while((q != NULL)&&(strcmpi(q->nombre,nombre) != 0) && (strcmpi(q->apellido,apellido) !=0) )
  	q=q->ligader;
  
  	
  
  
  if(q == NULL){
  	printf("el contacto no se encuentra en la lista");
  	}
  	
  	else
  	printf("el contacto si se encuetra en la lista");
  
  
  
  return(p);
	
}

nodo *eliminax(nodo *p, nodo *f, char nombre[],char apellido[])
{
	
	nodo *q,*t,*r;
	
	q=p;
	while((q->ligader != NULL) && (strcmpi(q->nombre,nombre)!= 0) && (strcmpi(q->apellido,apellido)!= 0)) 
	q=q->ligader;
	
	if((strcmpi(q->nombre,nombre) == 0) && (strcmpi(q->apellido,apellido)==0)){
		
		
		if((q == p) && (q == f)){
			
			p = NULL;
			f = NULL;
		
		
		}	
		else if(q == p){
			
			p=q->ligader;
			p->ligaizq=NULL;
			
			
			} 
			  else if(q == f){
			  	f=q->ligaizq;
			  	f->ligader=NULL; 
			  	
			  }
			
			else{
			  	t=q->ligaizq;
			  	r=q->ligader;
			  	t->ligader=r;
			  	r->ligaizq=t;
			  	q->ligaizq=NULL;
			  	q->ligader=NULL;
			  	
			   }
			  
		free(q);
		
	}
	else{
		printf("\n%s %s no fue encontrado en la lista",nombre,apellido);
	}

	return(p);
	
}

void guardarlista (nodo *p)
{
	nodo *q =p;
	char archivo[20];
	FILE *fp;
	
	printf("Introduzca el nombre del archivo:\n");
	scanf("%s",archivo);
	fflush(stdin);
	if ( (fp = fopen(archivo,"wb")) == NULL )
	 {
	 	printf("\n No se puede abrir el archivo:\n %s",archivo);
	 	exit(1);
	 }
	 
	 q= p;
	 while ( q != NULL)
	 {
	 
	 printf("\n Guardando la lista... \n");
	 
 
	 fwrite(q, sizeof(nodo),1,fp);
	 q = q->ligader;
	 }
	 fclose(fp);
}

nodo *cargarlista(nodo *p)
{
	nodo *q, *t,*v;
	t=NULL;
	v= NULL;
	q = NULL;
	
	char archivo[20];
	
	int i, op, e;
	FILE *fp;
	
	printf("Introduzca el nombre del archivo que desea leer:\n");
	scanf("%s",archivo);
	fflush(stdin);
	if ( (fp = fopen(archivo,"rb")) == NULL )
	 {
	 	printf("\n No existe el archivo: %s: ",archivo);
	 //	exit(1);
	     e= 1;
	 }
	 
	 if ( e != 1)
	 {
	 	
	 	printf("\n La lista actual se elimina para cargar la del archivo");
	 	printf("\nDesea continuar presione el numero uno 1: ");
	 	scanf("%d",&op);
	 	fflush(stdin);
	 	
	 	if ( op == 1 )
	 	{
	 		while( p != NULL )
	 		{
	 			q=p;
	 			p= p->ligader;
	 			free(q);
			 }
			 
		printf("\n Cargando la lista . . . ");
		
		p = creanodo();
		
		q = p;
		
		while ( ! feof(fp))
		{
		 if ( 1 != fread(q,sizeof(nodo),1,fp))	break;
		   if( t == NULL)
		    {
		    	q->ligaizq = NULL;	          
		    }
		    else {
		    	 v=q;
		    	 v->ligaizq = t;
		    }
	        
		   q->ligader = creanodo();
		 
		    t = q;
		    v= q->ligader;
		    q = q->ligader;  
		 };
		 	 
		 
		 t->ligader=NULL;
		
		 free(q);
		 fclose(fp);	 
		 }
	 }
	 
	 return(p);
	
}


