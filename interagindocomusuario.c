#include <stdio.h> // essa biblioteca tem printf/scanf ... que eu saiba.

int main(){
  short int number1;
  short int number2;

  printf("Digite um numero: ");
  scanf("%hd", &number1);

  printf("Digite um numero: ");
  scanf("%hd", &number2);

  printf("Seu numero %d\n", number1);
  printf("Seu numero %d\n", number2);

  if (number1 < number2){
  printf("Numero para menor ao maior %d %d\n", number1, number2);
  } else { printf("Numero para menor ao maior %d %d\n", number2, number1);
 }

  return 0;


}