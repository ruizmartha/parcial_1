#include<stdio.h>
void main ()
{
	float a;
	float sn=0;
	
	printf("Introduzca el salario bruto\n");
	scanf("%f",&a);
	
	if(a>=15000){
		sn=a-0.16;
		printf("El salario neto es 1:%.3f",sn);
	}else if(a<=15000){
		sn=a-0.1;
		printf("El salario neto es:%.3f",sn);
	}
}
