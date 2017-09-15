#include<stdio.h>
void main (){
	float a, sn=0;
	printf("introduzca el salario bruto");
	scanf("%d",&a);
	printf("introduzca el salario neto");
	scanf("%d",&sn);
	if(a<15000){
		printf("se aplicara un 0.16% de impuesto");
		}else
		printf("en caso contrario se aplicara 0.10%");
}
