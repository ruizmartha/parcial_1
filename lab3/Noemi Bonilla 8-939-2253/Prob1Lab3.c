#include <stdio.h>
void main () {
	float lado1=0, lado2=0, lado3=0;
	printf("Ingrese el primer lado del triangulo\n");
	scanf("%f", &lado1);
	printf("Ingrese el segundo lado del triangulo\n");
	scanf("%f", &lado2);
	printf("Ingrese el tercer lado del triangulo\n");
	scanf("%f", &lado3);
	if (lado1==lado2 && lado1==lado3)
	{
		printf("Es un triangulo equilatero");
    }
	else if (lado1!=lado2 && lado1!=lado3)
		{
			printf("Es un triangulo escaleno");
	    }
		else if (lado1==lado2 && lado1!=lado3)
	         {
	         	printf("Es un triangulo isosceles");
			 }
			 else if (lado1==lado3 && lado1!=lado2)
			 	{
			 		printf("Es un triangulo isosceles");
				}
				else if (lado2==lado3 && lado2!=lado1)
				 	{
				 		printf("Es un triangulo isosceles");
					 }

}
