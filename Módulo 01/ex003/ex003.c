/*
   Programa: Cadastro de Usuário
   Resolução: Rafael Costa
   Descrição: Este programa solicita ao usuário seu nome, idade e peso, validando as entradas e exibindo os dados informados.
*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    //Declaração de variáveis
    char nome[40];
    int idade;
    float peso;

    //Cabeçalho do programa
    printf("======== DADOS CADASTRAIS ========\n");

    //Entrada do nome do usuário
    while(1){
        printf("Qual é o seu nome? ");
        gets(nome);
        if(strlen(nome)>=3){
            break;
        }else{
            printf("<<ERRO>> Nome inválido! Digite novamente.\n");
        }
    }
    //Entrada e validação da idade
    while(1){
        printf("Quantos anos você tem? ");
        scanf("%d", &idade);
        if (idade >= 0){
           break;
        } else {
             printf("<<ERRO>> Idade inválida! Tente novamente.\n");
        }
    }
    //Entrada e validação do peso
    while(1){
        printf("Quantos é o seu peso (Kg)? ");
        scanf("%f", &peso);
        if (peso >= 0){
           break;
        } else {
             printf("<<ERRO>> Peso inválido! Tente novamente.\n");
        }
    }
    //Exibição do resultado
    printf("-------<<< PROCESSANDO >>>--------\n");
    printf("Muito prazer, %s.\nVocê tem %d anos e pesa %.2f kg,\ncorreto?\nFIM.\n", nome, idade, peso);
    printf("==================================\n");
}
