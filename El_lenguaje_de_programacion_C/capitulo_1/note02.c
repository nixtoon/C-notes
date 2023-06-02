#include <stdio.h>

int main(){
  int fahr;

  /* iteramos con for, iniciamos en 0, 
  vamos hasta 300 y se aumenta de 20 en 20*/

  for(fahr = 0; fahr <= 300; fahr = fahr + 20){
    /* imprimimos fahr con un espacio de 3
       imprimimos celsius como un float en un eapacio de 6 más 1 decimal
       y finamente hacemos el calculo dentro de la misma impresión
     */
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
  }
}