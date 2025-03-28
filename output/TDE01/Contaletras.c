#include <stdio.h>
#include <ctype.h>

// Quando queremos fazer uma explificação de um pasta que vai ser chamada usamos FILE logo * ponteiro indicando a localizaçãpo
void contarLetras(FILE *arquivo) { // função do tipo void é chamada para ter um retorno tipo ação ou efeito
    int contador[26] = {0};  // Array para contar a ocorrência das letras (a-z) alfabeto tem 26 letras
    char c; //variavel não definida

    //Enquanto c = todas letras lidas não for = final
    while ((c = fgetc(arquivo)) != EOF) { // EOF final de um arquivo (End of File, ou Fim de Arquivo)
        if (isalpha(c)) { // Verifica se é uma letra do alfabeto da biclioteca <ctype.h>
            c = tolower(c);  // Converte a letra para minúscula tolower=minuscula
            contador[c - 'a']++;  // Incrementa o contador da letra
        }
    }

    // Impressão da tabela de contagem
    printf("Tabela de contagem das letras:\n");
    for (int i = 0; i < 26; i++) { // então até i chegar a 26 vai continuar
        printf("%c: %d\n", 'a' + i, contador[i]); // encremente +1 no contador
    }
}

int main(int argc, char *argv[]) { //Vai retornar a string
    if (argc != 2) { // senão receber as 2 localizações
        printf("Uso: %s <nome_do_arquivo>\n", argv[0]);
        return 1;
    }

    FILE *arquivo = fopen(argv[1], "r"); // localiza o arquivo para fazer a leitura r
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    contarLetras(arquivo); // chama a função de contagem de letras

    fclose(arquivo); // fecha o arquivo
    return 0;
}
