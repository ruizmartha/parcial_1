/*Dado el dia y el mes indique a cual de los 12 signo zodiacal pertenece */
#include<stdio.h>
void main(){
	int dia;
	int mes;
	printf("coloque su dia: ");
	scanf("%d",&dia);
	printf("coloque mes: ");
	scanf("%d",&mes);
	if((mes==1^dia==21)||(mes==2^dia==19))
	printf("sigo zodiacal es acuario");
	else if((mes==2^dia==20)||(mes==3^dia==20))
	printf("sigo zodiacal es piscis");
	else if((mes==3^dia==21)||(mes==4^dia==20))
	printf("sigo zodiacal es aries");
	else if((mes==4^dia==21)||(mes==5^dia==20))
	printf("sigo zodiacal es tauro");
	else if((mes==5^dia==21)||(mes==6^dia==21))
	printf("sigo zodiacal es geminis");
	else if((mes==6^dia==21)||(mes==7^dia==22))
	printf("sigo zodiacal es cancer");
	else if((mes==7^dia==23)||(mes==8^dia==23))
	printf("sigo zodiacal es leo");
	else if((mes==8^dia==24)||(mes==9^dia==22))
	printf("sigo zodiacal es virgo");
	else if((mes==9^dia==23)||(mes==10^dia==22))
	printf("sigo zodiacal es libra");
	else if((mes==10^dia==23)||(mes==11^dia==22))
	printf("sigo zodiacal es escorpio");
	else if((mes==11^dia==23)||(mes==12^dia==21))
	printf("sigo zodiacal es sagitario");
	else if((mes==12^dia==22)||(mes==1^dia==20))
	printf("sigo zodiacal es capricornio");
	else
	printf("el valor no es valido");
	
	
}
	
