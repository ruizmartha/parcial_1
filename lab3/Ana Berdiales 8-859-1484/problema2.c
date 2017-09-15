//Introduzca 3 numeros y los muestre en pantalla de menor a mayor
#include<stdio.h>
void main (){
	int a,b,c;
	printf("Ingrese 3 numeros\n");
	scanf("%d %d %d", &a,&b,&c);
	if (a>b>c) 
	{
	 printf	("%d %d %d", a,b,c);
	}
	else if (b>a>c)
	{
	 printf("%d %d %d", b,a,c);
	}
	else if (c>b>a)
	{
	 printf("%d %d %d", c,b,a);
	}
	else if (b>c>a){
		printf("%d %d %d", b,c,a);
	}
	else 
	printf ("0");
   	 
	    	
}
