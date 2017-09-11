//Introduzca un valor entero y diga si es divisible entre 5 y 11, si no es divisible debe enviar un mensaje que diga que no es divisible (usar if-else)
#include<stdio.h>
void main(){
	int a,div=0;
	printf("Ingrese un valor entero\n");
	scanf("%d", &a);
	div=a/5;
	div=a/11;
	if (div!=0)
	{
	printf ("Si es divisible");
	}
	else 	
	printf("No es divisible");
      
}
