#include <stdio.h>

// Função para calcular o INSS progressivo
float calcular_inss(float salario) {
    float inss = 0.0;

    if (salario <= 1518.00) {
        inss = salario * 0.075;
    } else if (salario <= 2793.88) {
        inss = (1518.00 * 0.075) + ((salario - 1518.00) * 0.09);
    } else if (salario <= 4190.83) {
        inss = (1518.00 * 0.075) + ((2793.88 - 1518.00) * 0.09) + ((salario - 2793.88) * 0.12);
    } else if (salario <= 8157.41) {
        inss = (1518.00 * 0.075) + ((2793.88 - 1518.00) * 0.09) + ((4190.83 - 2793.88) * 0.12) + ((salario - 4190.83) * 0.14);
    } else {
        inss = (1518.00 * 0.075) + ((2793.88 - 1518.00) * 0.09) + ((4190.83 - 2793.88) * 0.12) + ((8157.41 - 4190.83) * 0.14);
    }

    return inss;
}

// Função para calcular o Imposto de Renda (IR)
float calcular_ir(float salario_base) {
    float ir = 0.0;

    if (salario_base <= 2259.20) {
        ir = 0.0; // Isento
    } else if (salario_base <= 2826.65) {
        ir = (salario_base * 0.075) - 169.44;
    } else if (salario_base <= 3751.05) {
        ir = (salario_base * 0.15) - 381.44;
    } else if (salario_base <= 4664.68) {
        ir = (salario_base * 0.225) - 662.77;
    } else {
        ir = (salario_base * 0.275) - 896.00; // Faixa acima de R$ 4.664,68
    }

    return (ir > 0) ? ir : 0.0; // Garante que o IR nunca seja negativo
}

int main() {
    float vl_hora;
    int aulas_trabalhadas;

    // Leitura dos dados
    printf("Digite o valor de sua hora aula: ");
    scanf("%f", &vl_hora);

    printf("Digite a quantidade de aulas que voce trabalhou no mes: ");
    scanf("%d", &aulas_trabalhadas);

    // Cálculo do salário bruto
    float salario_bruto = vl_hora * aulas_trabalhadas;

    // Cálculo dos descontos
    float desconto_inss = calcular_inss(salario_bruto);
    float salario_pos_inss = salario_bruto - desconto_inss;
    float desconto_ir = calcular_ir(salario_pos_inss);

    // Salário líquido
    float salario_liquido = salario_pos_inss - desconto_ir;

    // Exibindo os resultados
    printf("\nSalario Bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto INSS: R$ %.2f\n", desconto_inss);
    printf("Desconto IR: R$ %.2f\n", desconto_ir);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
