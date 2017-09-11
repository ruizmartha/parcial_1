#include<stdio.h>

void main(){
	int dia,mes;
	printf(" Introduzca el dia\n");
	scanf("%d",&dia);
	printf("Introduzca el mes\n");
	scanf("%d",&mes);
	if (dia>=1 && dia<=31){	
	
		if(mes>=1 && mes<=12 ){
			if(mes==1 && dia>=21 || mes==2 && dia<=20){
				printf("Acuario1");
			}
			else { 
			printf("");
			}
			if(mes==2 && dia>=20 || mes==3 && dia<=20){
				printf("Piscis");
			}
			else { 
			printf("");
			}
			if(mes==3 && dia>=21 || mes==4 && dia<=20){
				printf("Aries");
			}
			else { ;
			printf("");
			}
			if(mes==4 && dia>=21|| mes==5 && dia<=20){
				printf("Tauro");
			}
			else { 
			printf("");
			}
			if(mes==5 && dia>=21 || mes==6 && dia<=21){
				printf("Geminis");
			}
			else { 
			printf("");
			}
			if(mes==6 && dia>=22 || mes==7 && dia<=22){
				printf("Cancer");
			}
			else { ;
			printf("");
			}
			if(mes==7 && dia>=23 || mes==8 && dia<=23){
				printf("Leo");
			}
			else { ;
			printf("");
			}
			if(mes==8 && dia>=24 || mes==9 && dia<=22){
				printf("Virgo");
			}
			else { ;
			printf("");
			}
			if(mes==9 && dia>=23 || mes==10 && dia<=22){
				printf("Libra");
			}
			else { ;
			printf("");
			}
			if(mes==10 && dia>=23 || mes==11 && dia<=22){
				printf("Escorpio");
			}
			else { ;
			printf("");
			}
			if(mes==11 && dia>=23 || mes==12 && dia<=19){
				printf("Sagitario");
			}
			else { ;
			printf("");
			}
			if(mes==12 && dia>=21 || mes==1 && dia<=20){
				printf("Capricornio");
			}
			else { 
			printf("");
			}
		}
		else {
			printf("Mes no valido");
		}
	}
	else{
		printf("Dia no valido");
	}
}
