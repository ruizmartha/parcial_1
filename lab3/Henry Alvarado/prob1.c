#include<stdio.h>

void main(){
	int q1,q2,q3;
	printf("Introduzca 3 lados de un triangulo\n");
	scanf("%d %d %d",&q1,&q2,&q3);
	if((q1=q2) && (q2=q3)){
		printf("Es un triangulo equilatero");	
	}
	else if((q1=q2) && (q2<q3)){
		printf("Es un triangulo isosceles");
	}
	else if((q1!=q2) && (q2!=q3)){
		printf("Es un triangulo escaleno");
	}
}
