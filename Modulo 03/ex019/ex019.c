/*Resolução Rafael Costa*/
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("=========== ANO BISSEXTO ===========\n");

    //Declaração de variáveis
    int ano;

    //Entrada de dados com validação
    while(1){
        printf("Digite um ano qualquer (yyyy): ");
        while(scanf("%d", &ano) != 1){
            printf("<<ERRO>> Ano inválido!\nDigite um ano qualquer (yyyy): ");
            fflush(stdin);
        }
        if(ano > 0){
            break;
        }else{
            printf("<<ERRO>> Ano inválido!\n");
        }
    }
    //Verificação se o ano é bissexto
    if (ano %4==0 && ano % 100!=0 || ano % 400==0){
        printf("O ano %i É BISSEXTO.\n", ano);
    }else{
        printf("O ano %i NÃO É BISSEXTO.\n", ano);
    }
     printf("====================================\n");
}
