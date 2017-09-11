#include<stdio.h>
#define pi 3.1416
void main(){
	float alt,rad,sup=0,vol=0,slat=0,ssup=0;
	printf("Coloque el valor de la altura: ");
	scanf("\n %f",&alt);
	printf("coloque el valor de el radio: ");
	scanf("\n %f",&rad);
	sup=((2*pi*(rad*rad))+alt);
	printf("la superficie del cilindro es: %.1f \n",sup);
	vol=((pi)*(rad*rad)*(alt));
	printf(" el volumen es: %.1f \n",vol);
	slat=(2*(pi*rad*alt));
	printf("la superficie lateral es: %.1f \n",slat);
	ssup=(pi*rad*rad);
	printf("la superficie superior es: %.1f \n",ssup);
	
}
