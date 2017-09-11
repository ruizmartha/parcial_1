#include<stdio.h>

void main(){
	int valor, divi, divi2;
	
printf("Introduzca el numero a dividir: \n");
scanf("%d", &valor);
divi=valor/5;
divi2=valor/11;

if (divi%5 && divi2%11) {
	printf("Si es divisible");
} else{
	printf("No es divisible");
}
}
