/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf(" SUPER CALCULADORA v1.0\n");
    printf("------------------------\n");

    //Declara��o de vari�veis
    int num1, num2, res;
    char opcao;

    //Entrada de dados com valida��o
    printf("Valor 1 = ");
    while(scanf("%d", &num1) != 1){
        printf("<<ERRO>> Valor inv�lido.\nValor 1 = ");
        fflush(stdin);
    }
    printf("Valor 2 = ");
    while(scanf("%d", &num2) != 1){
    printf("<<ERRO>> Valor inv�lido.\nValor 2 = ");
    fflush(stdin);
    }

    //Op��es de opera��es
    printf("========================\n");
    printf("+\tAdi��o\n");
    printf("-\tSubtra��o\n");
    printf("*\tMultiplica��o\n");
    printf("/\tDivis�o\n");
    printf("========================\n");

    //Escolha da op��o

    printf("Digite sua op��o => ");
    fflush(stdin);
    opcao = getchar();
    printf("------------------------\n");
    //C�lculo do resultado
    switch(opcao){
    case '+':
        res = num1 + num2;
        printf("O resultado de %d + %d\n� igual a %d.\n", num1, num2, res);
        break;
    case '-':
        res = num1 - num2;
        printf("O resultado de %d - %d\n� igual a %d.\n", num1, num2, res);
        break;
    case '*':
        res = num1 * num2;
        printf("O resultado de %d * %d\n� igual a %d.\n", num1, num2, res);
        break;
    case '/':
        res = num1 / num2;
        printf("O resultado de %d / %d\n� igual a %d.\n", num1, num2, res);
        break;
    default:
        printf("N�o foi poss�vel fazer\na opera��o.\nTente novamente.\n");
        break;
    }
     printf("------------------------\n");
     printf("VOLTE SEMPRE!\n");
}
