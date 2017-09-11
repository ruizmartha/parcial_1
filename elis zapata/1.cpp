#include <stdio.h>
#define PI 3.1415

main (){
	float radio, s, volumen, sl, ss, altura;
	
	printf ("\n deme la altura del cilindro =\t ");
	scanf ("%f",&altura);
	
	printf ("\n deme la radio del cilindro =t");
	scanf ("%f",&radio);
	
	s=(2 * PI * radio * radio) + altura;
	volumen = PI * radio * radio * altura;
	sl = 2 * PI * radio * altura;
	ss = PI * radio * radio;
	
	printf ("\n el valor de la superficie es =\t %.2f",s);
	printf ("\n el valor del volumen es =\t %.2f",volumen);
	printf ("\n el valor de la superficie lateral es =\t %.2f",sl);
	printf ("\n el valor de la superficie superior es =\t %.2f",ss);
	
}
