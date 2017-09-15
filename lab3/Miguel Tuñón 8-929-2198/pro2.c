#include<stdio.h>
void main ()
{
	int a;
	
	printf("Introduzca un numero\n");
	scanf("%d",&a);
	
	if(a>0){
		printf("El nuemro es positivo:%d ",a);
	}else{
		printf("El numero es negativo:%d ",a);
	}
}
