//nmeros primos 2-3-5 no primos 1-4
#include <stdio.h>
void main(){
	int num;
	printf("introduzca numero del 1 al 5: \n");
	scanf( "%d",&num);
	if(num!=4)
	printf("el numero es primo");
	if(num==4)
	printf("el numero no es primo");
	else
	printf("el numero no es valido");
}
