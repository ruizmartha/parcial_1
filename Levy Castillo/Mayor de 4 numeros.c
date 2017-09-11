#include <stdio.h>
void main(){
	int n1,n2,n3,n4,nmayor;

	printf("escriba el primer numero\n");
	scanf("%d",&n1);
	printf("escriba el segundo numero\n");
	scanf("%d",&n2);
	printf("escriba el tercer numero\n");
	scanf("%d",&n3);
	printf("escriba el cuarto numero\n");
	scanf("%d",&n4);
	
	if(n1>n2||n2>n1 && n4>n3||n3>n4){
		printf("el mayor de los cuatro numeros es:%d\n,n1");
		printf("el mayor de los cuatro numeros es:%d\n,n2");
		printf("el mayor de los cuatro numeros es:%d\n,n3");
		printf("el mayor de los cuatro numeros es:%d\n,n4");
	} 
	
	
	
}
