#include<stdio.h>
void main(){
	float desca=0.16,descb=0.10, salarioneto=0,salario;
	printf("acceda su salario\n");
	scanf("%f",&salario);
	if (salario>=15000){
	salarioneto=salario*desca;
	}else if (salario<15000){
	salarioneto=salario*descb;
	}
	printf("su salario neto es:%f",salario-salarioneto);
	
}
