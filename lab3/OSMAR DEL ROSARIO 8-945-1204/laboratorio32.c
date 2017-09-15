#include<stdio.h>

void main(){
	float num;
	int abs=-1;
	
	printf("Ingrese un numero \n");
	scanf("%f",&num);
	
	if(num<0){
		(num=num*abs);
	}
	printf("El valor absoluto del numero es: %.2f", num);
}
