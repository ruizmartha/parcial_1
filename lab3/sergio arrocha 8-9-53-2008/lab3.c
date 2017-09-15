#include<stdio.h>
void main (){
	int menu,c,d=0;
	float min=60,hor=24,seg=60;
	
	printf("introduzaca un dia del mes ");
	 scanf("%d",&c);
	printf("introduzca 1 para convertir en horas,introduzca 2 para convertir en minutos,introduzca 3 para convertir segundo ");
	 scanf("%d",&menu);
	 if(menu==1){
	 	d=c*24;
	 printf("el dia convertido en horas es:%d",d,hor);}
	 if(menu==2){
	 	d=c*60;
	 printf("el dia convertido en minuto es:%d",d,min);}
	  if(menu==3){
	 	d=c*60;
	 printf("el dia convertido en segundo es:%d",d,seg);}
	 	
	
}
	

