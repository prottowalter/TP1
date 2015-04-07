/* Imprime una tabla de Celsius a Farenheit usando while*/
  
#include<stdio.h>
#include<windows.h>

int main ()
	{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; /*Limite Superior de la tabla*/
	upper = 300; /*Limite Inferior de la Tabla*/
	step = 20; /*Paso del Fahr*/
	
	celsius = lower; /*Inicialización de la variable celsius*/	
	
	while (celsius <= upper)
	{
	 fahr = (celsius/(5.0/9.0) + 32);
	 printf ("%3.0f %6.2f\n",celsius,fahr);
	 celsius = step + celsius; /* Aplico el incremento a la variable celsius */
	};
	}
