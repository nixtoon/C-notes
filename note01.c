#include <stdio.h>

/* imprime la tabla 
fahrenheit-celsius
para fahr = 0, 20, ...300
*/


int main(){

  // declaracion de variables
  int fahr, celsius;
  int lower, upper, step;

  // iniciamos las variables
  lower = 0;
  upper = 300;
  step = 20;

  // iniciamos la variable fahr en 0
  fahr = lower;

  // aqui podemos hacer un print de los calculos realizados en formato de tabla
  // usamos \t para tabular, \n para el salto de pagina, %d para imprimir los numeros
  while(fahr <= upper){
    celsius = 5 * (fahr-32)/9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step; 
  }

}