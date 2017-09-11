#include<stdio.h>
void main ()
{
	float ab,resultado=0;
	printf("introduzca el valor");
	scanf("%f",ab);
	if(ab>0.50)
		resultado=ab*100;
	else(ab<0.50)
		resultado=ab*ab;
 printf("el resultado es:%f",resultado);

