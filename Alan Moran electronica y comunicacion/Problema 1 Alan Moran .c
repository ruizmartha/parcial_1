#include<stdio.h>
 main (){
 
	float pi=3.14,s , vol , sl , ss , r  , a  ;
	printf("\n introduzca el valor del radio ");
	scanf("%f",&r);
	printf("\n introduzca el valor de la altutra ");
	scanf("%f",&a);
	s=2*pi*(r+a);
	printf("\n el resultado de la superficie c es :""%f",s);
	
	printf("\n introduzca el valor del radio\n ");
	scanf("%f",&r);
	printf("\n introduzca el valor de la altutra ");
	scanf("%f",&a);
	vol=(pi*r)*r*a;
	printf("\n el resultado del volumen es :""%f",vol);
	 
	printf("\n introduzca el valor del radio ");
	scanf("%f",&r);
	printf("\n introduzca el valor de la altutra ");
	scanf("%f",&a);
	sl=pi*(r*a);
	printf("\n el resultado de la superficie lateral es :""%f",sl);
	
	printf("\n introduzca el valor del radio ");
	scanf("%f",&r);
	printf("\n introduzca el valor de la altutra ");
	scanf("%f",&a);
	ss=(pi)*r*r;
	printf("\n el resultado de la superficie superior es :""%f",sl);
	
  } 
