#include<stdio.h>

void main(){
	float a;
	printf("Introduzca un numero\n");
	scanf("%f", &a);
	if(a<0){
	printf("El numero que introdujo es NEGATIVO");		
	}
	else{
		printf("El numero que introdujo es POSITIVO");
	}
}
