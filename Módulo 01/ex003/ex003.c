/*
   Programa: Cadastro de Usu�rio
   Resolu��o: Rafael Costa
   Descri��o: Este programa solicita ao usu�rio seu nome, idade e peso, validando as entradas e exibindo os dados informados.
*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    //Declara��o de vari�veis
    char nome[40];
    int idade;
    float peso;

    //Cabe�alho do programa
    printf("======== DADOS CADASTRAIS ========\n");

    //Entrada do nome do usu�rio
    printf("Qual � o seu nome? ");
    gets(nome);

    //Entrada e valida��o da idade
    while(1){
        printf("Quantos anos voc� tem? ");
        scanf("%d", &idade);
        if (idade >= 0){
           break;
        } else {
             printf("<<ERRO>> Idade inv�lida! Tente novamente.\n");
        }
    }
    //Entrada e valida��o do peso
    while(1){
        printf("Quantos � o seu peso? ");
        scanf("%f", &peso);
        if (peso >= 0){
           break;
        } else {
             printf("<<ERRO>> Peso inv�lido! Tente novamente.\n");
        }
    }
    //Exibi��o do resultado
    printf("-------<<< PROCESSANDO >>>--------\n");
    printf("Muito prazer, %s.\nVoc� tem %d anos e pesa %.2f kg,\ncorreto?\nFIM.\n", nome, idade, peso);
    printf("==================================\n");
}
