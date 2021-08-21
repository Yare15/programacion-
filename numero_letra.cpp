#include<stdio.h>
#include<math.h>


int main(){
	
  int num,pot=0;
  char palab[20];
  
  printf("ingrese el numero: ");
  scanf("%i",&num);
  fflush(stdin);
  
  
  if(num==15){
  printf("quince");
  } 
  
  else{
  	pot=pow(num,3);
  	printf("%i",pot);
  }
	
	
	return 0;
}
