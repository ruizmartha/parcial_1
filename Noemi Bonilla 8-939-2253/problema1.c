#include <stdio.h>
void main () {
	int num1, num2, num3, num4;
	printf("INGRESE CUATRO NUMEROS ENTEROS\n");
	printf("Primer numero:\t");
	scanf("%d", &num1);
	printf("Segundo numero:\t");
	scanf("%d", &num2);
	printf("Tercer numero:\t");
	scanf("%d", &num3);
	printf("Cuarto numero:\t");
	scanf("%d", &num4);
	printf("\n");
	if (num1>num2 && num1>num3 && num1>num4)
	{
		printf("El primer numero es el mayor: %d", num1);
	}
	else if (num2>num1 && num2>num3 && num2>num4)
	{
		printf("El segundo numero es el mayor: %d", num2);
	}
	else if (num3>num1 && num3>num2 && num3>num4)
	{
		printf("El tercer numero es el mayor: %d", num3);
	}
	else if (num4>num1 && num4>num2 && num4>num3)
	{
		printf("El cuarto numero es el mayor: %d", num4);
	}
}
