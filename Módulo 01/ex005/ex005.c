/*
   Programa: Jogo de Adivinhação
   Resolução: Rafael Costa
   Descrição: Este programa gera um número aleatório entre 1 e 5 e permite que o usuário tente adivinhar qual foi o número escolhido.
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>


void main(){
    setlocale(LC_ALL, "Portuguese");
    //Cabeçalho do programa
    printf("========= SERÁ QUE VOCÊ ACERTA? =========\n");

    //Declaração de variáveis
    int num, nr;

    // Inicialização do gerador de números aleatórios
    srand(time(NULL));
    num = rand() % 5 + 1; //Vai gerar um número entre 1 e 5

    //Entrada de dados pelo usuário
    printf("Vou pensar em número entre 1 e 5.\nTente advinhar!");
    printf(" Qual é o seu palpite? ");
    scanf("%d", &nr);

    //Exibição dos resultados
    printf("Eu pensei no número %d e você pensou no %d.\n", num, nr);
    printf("=========================================\n");

}
