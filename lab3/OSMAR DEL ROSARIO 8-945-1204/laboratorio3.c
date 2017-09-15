#include<stdio.h>

void main(){
	int num=0, mod=0;
	
	printf("Introduzca un numero del 1 al 5 \n");
	scanf("%d",&num);
	mod=num%num;
	if (mod!=4) {
	printf("El numero no es primo");
    }else { 
	printf("El numero es primo");
	}
}
		

