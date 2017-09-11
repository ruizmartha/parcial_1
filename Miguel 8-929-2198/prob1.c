#include<stdio.h>
#define PI 3.1416
void main ()
{
	float radio,altura;
	float s=0,vol=0,sl=0,ss=0;
	
	printf("Ingrese la altura\n");
	scanf("%f",&altura);
	printf("Ingrese el radio\n");
	scanf("%f",&radio);
	
	s=2*PI*radio*(radio+altura);
	vol=PI*radio*radio*altura;
	sl=2*PI*radio*altura;
	ss=PI*radio*radio;
	
	
	printf("La superficie del cilindro es:%.2f\n",s);
	printf("El volumen del cilindro es:%.2f\n",vol);
	printf("La superficie lateral es:%.2f\n",sl);
	printf("La suerficie superiror es:%.2f\n",ss);
}
