#include <stdio.h>
#include <stdlib.h>

int main() {
  int idade = 25; // Uma variavel do tipo inteiro
  char nome[] = "Carlos"; // Cria uma var/string/%s que armazena uma nome

  // Calcula o tamanho necessário
  int tamanho = snprintf(NULL, 0, "Meu nome é %s e eu tenho %d anos.", nome, idade); // armazena o tamanho da variavel tramanho
// snprintf armazena esse tamanho como uma variavel/vetor como vazio.

  char *mensagem = malloc(tamanho + 1); // Cria um local da memoria/ pnteiro e não deixa ter mais de 1 espaço


  sprintf(mensagem, "Meu nome é %s e eu tenho %d anos.", nome, idade); // coloca a variavel dentro do da string/vetor criada como ponteiro

  printf("%s\n", mensagem); // exibe o que faz

  free(mensagem); // Esse aqui não entendi muito bem o que faz; pode esclarecer
  return 0;
}
