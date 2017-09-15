#include <stdio.h>
void main (){
	float num=0, multi=0;
	int c;
	printf ("Introduzca un numero decimal: \n");
	scanf("%f", &num);
	c=(int)num;
	
	if (c>0.50)
	{
		multi=(c*100);
		printf("El numero es: %d", &multi);
	}
	else
	{
		printf("El numero es %d", &c);
	}
	
}
