#include <stdio.h>
void main(){
	int num;
	float sb=0,sn=0,dedu=1000,snt=0;
	printf("INTRODUZCA EL SALARIO BRUTO DEL TRABAJADOR: \n");
	scanf("\n %f",&sb);
	sn=sb-(sb-dedu);
	printf("salario neto es: %f \n",sn);
	if(sn>15000){
		printf("se le aplicara un impuesto de 16% \n");
		snt=sn-(sn-0.16);}
	else{
	printf("se le aplicara un impuesto de 10% \n");
    snt=sn-(sn-0.10);
	}
	printf("el salario neto total es : %f \n",snt);
}
