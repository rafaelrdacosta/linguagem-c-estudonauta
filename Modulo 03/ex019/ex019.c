/*Resolu��o Rafael Costa*/
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("=========== ANO BISSEXTO ===========\n");

    //Declara��o de vari�veis
    int ano;

    //Entrada de dados com valida��o
    while(1){
        printf("Digite um ano qualquer (yyyy): ");
        while(scanf("%d", &ano) != 1){
            printf("<<ERRO>> Ano inv�lido!\nDigite um ano qualquer (yyyy): ");
            fflush(stdin);
        }
        if(ano > 0){
            break;
        }else{
            printf("<<ERRO>> Ano inv�lido!\n");
        }
    }
    //Verifica��o se o ano � bissexto
    if (ano %4==0 && ano % 100!=0 || ano % 400==0){
        printf("O ano %i � BISSEXTO.\n", ano);
    }else{
        printf("O ano %i N�O � BISSEXTO.\n", ano);
    }
     printf("====================================\n");
}
