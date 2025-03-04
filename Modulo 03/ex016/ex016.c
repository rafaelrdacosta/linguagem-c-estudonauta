/*
    Programa: Desconto para Consumidor
    Resolu��o: Rafael Costa
    Descri��o: Este programa calcula o desconto de 10% para compras acima de R$ 500
               e exibe o valor final a ser pago.
*/
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("========= CONSUMIDOR GANHA DESCONTO =========\n");

    //Declara��o de vari�veis
    float conta, desconto, n_conta;

    // Entrada de dados com valida��o
    while(1){
        printf("Qual foi o valor total das compras? R$ ");
        while(scanf("%f", &conta) != 1){
             printf("<<ERRO>> Valor inv�lido!\nQual foi o valor total das compras? R$ ");
             fflush(stdin);
        }
        if(conta > 0){
            break;
        }else{
            printf("<<ERRO>> Valor inv�lido! Digite novamente.\n");
        }
        // Limpa o buffer para evitar loop infinito caso entrada seja inv�lida
        while (getchar() != '\n');
    }
    //Exibi��o do valor da conta
     printf("---------------------------------------------\n");
     printf("Voc� comprou R$ %.2f na nossa loja.\n", conta);

    //Exibi��o do desconto
    if(conta >= 500){
        desconto = conta*0.1;
        n_conta = conta - desconto;
        printf("================== ATEN��O ==================\n");
        printf("Por fazer mais de R$ 500 em compras,\nvoc� vai receber R$ %.2f de desconto.\n", desconto);
        printf("O valor a ser pago � R$ %.2f! ", n_conta);
    }
    printf("Volte Sempre!\n");
    printf("---------------------------------------------\n");
}
