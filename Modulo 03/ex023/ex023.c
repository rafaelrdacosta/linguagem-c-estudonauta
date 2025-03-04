/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("===== POSITIVO, NEGATIVO ou NULO =====\n");
    printf("Me diga um número e eu te direi\nse ele é POSITIVO, NEGATIVO ou NULO.\n");

    //Declaração de variável
    int num;

   // Entrada de dados com validação
    printf("Digite um número: ");

    while (scanf("%d", &num) != 1) { // Valida se a entrada é um número inteiro
        printf("<<ERRO>> Entrada inválida!\nDigite um número: ");

        // Limpa o buffer de entrada para evitar loop infinito
        while (getchar() != '\n');
    }
    //Exibição do resultado
    if(num > 0){
        printf("O valor %d digitado é POSITIVO.\n", num);
    } else if(num < 0){
        printf("O valor %d digitado é NEGATIVO.\n", num);
    } else{
        printf("O valor %d digitado é NULO.\n", num);
    }
    printf("======================================\n");
}
