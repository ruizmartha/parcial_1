#include<stdio.h>
void main() {
	int d,m;
	printf("introduzaca un dia ");
	scanf("%d",&d);
	
	printf("introduzca un mes ");
	scanf("%d",&m);
	
	if (m>=3 && d<=21 || m==4 && d<=20) {
		
		printf( "el signo es aries\n" );
	}
	else{
		printf("el mes introducido no es valido\n");
	}
	
	if (m>=4 && d<=21 || m==5 && d<=20) {
		
		printf( "el signo es tauro\n" );
	}
		else{
		printf("el mes introducido no es valido\n");
	}
	
		if (m>=5 && d<=21 || m==6 && d<=21) {
		
		printf( "el signo es geminis\n" );
	}
		else{
		printf("el mes introducido no es valido\n");
	}
	 
	 	if (m>=6 && d<=22 || m==7 && d<=23) {
		
		printf( "el signo es cancer\n" );
	}
		else{
		printf("el mes introducido no es valido\n");
	}
	
		if (m>=7 && d<=23 || m==8 && d<=23) {
		
		printf( "el signo es leo\n" );
	}
		else{
		printf("el mes introducido no es valido\n");
	}
	
		if (m>=8 && d<=24 || m==9 && d<=22) {
		
		printf( "el signo es virgo\n" );
	}
		else{
		printf("el mes introducido no es valido\n");
	}
	
		if (m>=9 && d<=23 || m==10 && d<=22) {
		
		printf( "el signo es libra\n" );
	}
		else{
		printf("el mes introducido no es valido\n");
	}
		if (m>=10 && d<=23 || m==11 && d<=22) {
		
		printf( "el signo es escorpio\n" );
	}
		else{
		printf("el mes introducido no es valido\n");
	}
	
		if (m>=11 && d<=23 || m==12 && d<=21) {
		
		printf( "el signo es sagitario\n" );
	}
		else{
		printf("el mes introducido no es valido\n");
	}
	
	 	if (m>=12 && d<=21 || m==1 && d<=20) {
		
		printf( "el signo es acurio\n" );
	}
		else{
		printf("el mes introducido no es valido\n");
	}
	
		if (m>=1 && d<=20 || m==2 && d<=20) {
		
		printf( "el signo es picis\n" );
	}
		else{
		printf("el mes introducido no es valido \n");
	}
	
}



