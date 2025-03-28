#include <stdio.h>

int main() {
  float celsius, fahrenheit, resultado;



  printf("Coloque quantos celsios esta fazendo");
  scanf("%f", &celsius);

  fahrenheit = celsius * 9/5 + 32; // QUANDO VOCÊ ESTA FAZENDO UM CALCULO EM C ELE É FEITO SICRONICO

  printf("o resultado e em fahrenheit %.2f", fahrenheit);



}