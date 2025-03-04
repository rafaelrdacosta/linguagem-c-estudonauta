/*
    Programa: Desconto para Consumidor
    Resolução: Rafael Costa
    Descrição: Este programa calcula o desconto de 10% para compras acima de R$ 500
               e exibe o valor final a ser pago.
*/
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("========= CONSUMIDOR GANHA DESCONTO =========\n");

    //Declaração de variáveis
    float conta, desconto, n_conta;

    // Entrada de dados com validação
    while(1){
        printf("Qual foi o valor total das compras? R$ ");
        while(scanf("%f", &conta) != 1){
             printf("<<ERRO>> Valor inválido!\nQual foi o valor total das compras? R$ ");
             fflush(stdin);
        }
        if(conta > 0){
            break;
        }else{
            printf("<<ERRO>> Valor inválido! Digite novamente.\n");
        }
        // Limpa o buffer para evitar loop infinito caso entrada seja inválida
        while (getchar() != '\n');
    }
    //Exibição do valor da conta
     printf("---------------------------------------------\n");
     printf("Você comprou R$ %.2f na nossa loja.\n", conta);

    //Exibição do desconto
    if(conta >= 500){
        desconto = conta*0.1;
        n_conta = conta - desconto;
        printf("================== ATENÇÃO ==================\n");
        printf("Por fazer mais de R$ 500 em compras,\nvocê vai receber R$ %.2f de desconto.\n", desconto);
        printf("O valor a ser pago é R$ %.2f! ", n_conta);
    }
    printf("Volte Sempre!\n");
    printf("---------------------------------------------\n");
}
