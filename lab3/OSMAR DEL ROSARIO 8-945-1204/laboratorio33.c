#include<stdio.h>

void main(){

float salario, descuento, descuento1=0.16, descuento2=0.10;

printf("Introduzca su salario \n");
scanf("%f", &salario);

	if(salario>=15000){
	(descuento=salario*0.16);

}	if(salario<15000) {
	(descuento=salario*0.10);
}	

printf("Su salario neto es: %f",salario-descuento);

}
