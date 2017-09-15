#include<stdio.h>
void main (){
	int dias,horas,minutos,segundos,cant=0,menu;
	printf("introduzca la cantidad de dias\n");
	scanf("%d",&dias);
	printf("introduzca 1 para convertir dias por horas,introduzca 2 para convertir dias por minutos, introduzca 3 para convertir dias por segundos\n");
	scanf("%d",&menu);
	if(menu==1){
	cant=(dias*24);
	printf("la cantidad de dias convertidos a horas es:%d",cant);
	}else if (menu==2){
	cant=dias*24*60;
	printf("la cantidad de dias convertidos a minutos es:%d",cant);
	}else if (menu==3){
	cant=dias*24*60*60;
	printf("la cantidad de dias convertidos a segundos es %d",cant);
	}
	
}
