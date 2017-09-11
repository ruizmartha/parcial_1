#include<stdio.h>

void main(){
	float deci, prod1;
	int ente, prod2;
	
printf("introduzca un numero decimal \n ");
scanf("%f", &deci);
printf("introduzca un numero entero \n");
scanf("%d", &ente);

if(deci>=.50){
	prod1=deci*ente;
	printf("el resultado es: %.2f", prod1);
}else{
	prod2=deci*deci;
	printf("el resultado es: %.2f", prod2);
}
	
}
