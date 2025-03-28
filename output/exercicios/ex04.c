#include <stdio.h>

int main(){
  float volume, raio, altura, resultado;
  volume = 3.14159;

  printf("Coloque a altura da lata");
  scanf("%f", &altura);
  printf("Coloque a altura da raio");
  scanf("%f", &raio);
  raio = raio * raio;
  resultado = volume * raio * altura;

  printf("O volume da lata de oleo e %.2f", resultado);


  }