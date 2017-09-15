#include <stdio.h>
void main () {
	int num=0;
	printf("Introduzca un numero cualquiera\n");
	scanf("%d", &num);
	if (num>0)
	{
		printf("El numero es positivo");
    }
	else 
	{
		printf("El numero es negativo ");
	}
}
