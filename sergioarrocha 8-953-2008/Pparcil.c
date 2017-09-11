#include<stdio.h>
#define PI 3.1416

void main() {
	float s=0,vol=0,sl=0,ss=0;
	float r,h,cil;
	
	printf("introduzca el radio del cilindro ");
	scanf("%f",&r);
	printf(" introduzca la altura del cilindro ");
	scanf("%f",h);
	
	s=(2*PI)*(r+h);
	
	printf("la superficie del cilindro es :%.2f",s);
	
	printf("introduzca el radio del cilindro ");
	scanf("%f",&r);
	printf(" introduzca la altura del cilindro ");
	scanf("%f",h);
	
	vol= (PI*r)*(r*h);
	
	printf("el volumen del cilindro es :%.2f",vol);
	
	printf("introduzca el radio del cilindro ");
	scanf("%f",&r);
	printf(" introduzca la altura del cilindro ");
	scanf("%f",h);
	
	sl=(2*PI)*(r*h);
	
	printf("la superficie lateral del cilindro es :%.2f",sl);
	
		printf("introduzca el radio del cilindro ");
	scanf("%f",&r);
	 
	 ss= (PI*r)*r;
	 
	 printf("la superficie superior del cilindro es :%.2f",ss);
	 
}
