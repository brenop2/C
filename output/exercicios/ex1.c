#include <stdio.h>


  //calculo imposto
  float desconto(float salario_des) {
    if (salario_des <= 1518.00) {
      salario_des = salario_des * 0.075;
      printf("%.2f", salario_des);
    } else if (salario_des >= 2793.88) {
      salario_des = salario_des * 0.09;
    }
  }
int main(){
      float vl_hora; // tava errando pois estava terminando a determinação/atribuição das variaveis usando ;
      int Aulas_trabalhadas;

      //calculos salario
      float dia_sal = vl_hora * 8;
      float Total_de_salario = dia_sal * Aulas_trabalhadas;

      float resultado = Total_de_salario - desconto(Total_de_salario);


      printf("Digite o valor de sua hora: ");
      scanf("%.2f", &vl_hora);


      printf("Digite a quantidade de aulas que voce trabalhou: ");
      scanf("%.2f", &Aulas_trabalhadas);

      printf("Total de seu salario e R$: %.2f sem descontos/ ou seja bruto\n", Total_de_salario);

      printf(" Seu salario liquido e: %.2f\n", resultado);


      return 0;
    }