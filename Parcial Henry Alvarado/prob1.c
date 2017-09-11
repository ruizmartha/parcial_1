#include<stdio.h>
#define PI 3.1416

void main(){
	float h,r,s=0,Volumen=0,sl=0,ss=0;
	printf("Introduzca la altura del cilindro\n");
	scanf("%f",&h);
	printf("\nIntroduzca el radio del cilindro\n");
	scanf("%f",&r);
	
	s=(2*PI)*(r*r)+h;
	Volumen=(PI*r)*(r*h);
	sl=(2*PI)*(r*h);
	ss=(PI*r)*h;
	
	printf("\nLa superficie del cilindro es %.2f",s);
	printf("\nEl volumen del cilindro es %.2f",Volumen);
	printf("\nLa superficie lateral es %.2f",sl);
	printf("\nLa superficie superior es %.2f",ss);
	getchar();
}
