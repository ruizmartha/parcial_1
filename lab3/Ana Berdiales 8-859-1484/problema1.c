//Dado 1 dia del mes introducido por teclado me devuelven la cantidad de horas, minutos y segundos basados en un menú
#include<stdio.h>
void main ()
   {
 	 int seg,min, hora, dia;
	 int menu;
	 printf("Ingrese 1 dia del mes\n");
	 scanf ("%d",&dia);
  	 printf("Introduzca\n 1 Para horas\n 2 Para minutos\n 3 Para Segundos \n");
	 scanf("%d",&menu);
	 
	 if (menu==1)
	    {
	    	hora=(1*24);
		 printf("El dia tiene %d horas", hora);
       	}
       	else if (menu==2)
		   {
		   	min=(60*24);
		   	printf("El dia tiene %d minutos", min);
		   	  }
	        else if (menu==3)
	        {
	        	seg=(60*60*24);
	        	printf("El dia tiene %d segundos",seg);
			}
		      else   
				printf("El valor es invalido");
				
	}
