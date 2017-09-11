#include <stdio.h>
void main () {
	float val, resta=0, mult2=0;
	printf("Ingrese un numero decimal (con dos decimales):\n");
	scanf("%f", &val);
	printf("\n");
    int mult=0;
    int c=(int)val;
    resta=(val-c);
	if (resta>0.50)
	{
		mult=(c*100);
		printf("La multiplicacion es %d", mult);
	}
	else
	{
		mult2=(c*resta);
		printf("La multiplicacion es %.2f", mult2);
	}
}
