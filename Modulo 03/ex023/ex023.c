/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("===== POSITIVO, NEGATIVO ou NULO =====\n");
    printf("Me diga um n�mero e eu te direi\nse ele � POSITIVO, NEGATIVO ou NULO.\n");

    //Declara��o de vari�vel
    int num;

   // Entrada de dados com valida��o
    printf("Digite um n�mero: ");

    while (scanf("%d", &num) != 1) { // Valida se a entrada � um n�mero inteiro
        printf("<<ERRO>> Entrada inv�lida!\nDigite um n�mero: ");

        // Limpa o buffer de entrada para evitar loop infinito
        while (getchar() != '\n');
    }
    //Exibi��o do resultado
    if(num > 0){
        printf("O valor %d digitado � POSITIVO.\n", num);
    } else if(num < 0){
        printf("O valor %d digitado � NEGATIVO.\n", num);
    } else{
        printf("O valor %d digitado � NULO.\n", num);
    }
    printf("======================================\n");
}
