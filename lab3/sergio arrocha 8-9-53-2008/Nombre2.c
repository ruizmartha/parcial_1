#include<stdio.h>
void main(){
	int num1,num2,num3,num;
	
	printf("ntroduzca tres numeros:(0-3) \n");

	 scanf("%d %d %d",&num1,&num2,&num3);
	 
	if((num1<=0) && (num2>=2)){
		printf("el numero es mayor");
	}else if ((num2>=2) && (num<= 3)){
	 printf("el numero es menor");	
	  	
	}else{
		printf("los numeros de mayor a menor son:");
	}
	 
}

