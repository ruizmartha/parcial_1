  //Crea un programa en C que lea un valor flotante y si su parte decimal es mayor que 0.50 multiplicar su parte entera por 100,
  //en caso contrario multiplicar la parte entera por la parte decimal. (debe utilizar if-else)
  #include <stdio.h>
  void main () {
  float a,mult;
  printf("Ingrese un valor flotante\n");
  scanf("%f",&a);
     if (a>0.50)
   {
   	mult=a*100;
    printf("La respuesta es: %.2f", mult);
  }
  else if (a<0.50)
  {
  	mult=a*0.50;
  	printf ("La respuesta es: %.2f", mult);
  }
   else 
   printf("Adios");
  }
  
  
  
  
  
  
  
  
