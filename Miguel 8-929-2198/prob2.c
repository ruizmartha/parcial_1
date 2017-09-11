#include<stdio.h>
void main ()
{
	int dia,mes;
	
	printf("Introduzca su dia de nacimiento\n");
	scanf("%d",&dia);
	printf("Introduzca su mes de nacimiento\n");
	scanf("%d",&mes);
	
	if(dia>=22 && mes==12 || dia<=20 && mes==1 ){
		printf("Su signo es: Capricornio");
	}else if(dia>=21 && mes==1 || dia<=19 && mes==2){
		printf("Su signo es: Acuario");
	}else if(dia>=20 && mes==2 || dia<=20 && mes==3){
		printf("Su signo es: piscis");
	}else if(dia>=21 && mes==3 || dia<=20 && mes==4){
		printf("Su signo es: Aries");
	}else if(dia>=21 && mes==4 || dia<=20 && mes==5){
		printf("Su signo es: Tauro");
	}else if(dia>=21 && mes==5 || dia<=21 && mes==6){
		printf("su signo es: Geminis");
	}else if(dia>=22 && mes==6 || dia<=22 && mes==7){
		printf("su signo es: Cancer");
	}else if(dia>=23 && mes==7 || dia<=23 && mes==8){
		printf("su signo es: Leo");
	}else if(dia>=24 && mes==8 || dia<=22 && mes==9){
		printf("su signo es: Virgo");
	}else if(dia>=23 && mes==9 || dia<=22 && mes==10){
		printf("su signo es: Libra");
	}else if(dia>=23 && mes==10 || dia<=22 && mes==11){
		printf("su signo es: Escorpio");
	}else if(dia>=23 && mes==11 || dia<=21 && mes==12){
		printf("su signo es: Sagitario");
	}else
		printf("No es valido");
}
