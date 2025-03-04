/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf(" SUPER CALCULADORA v1.0\n");
    printf("------------------------\n");

    //Declaração de variáveis
    int num1, num2, res;
    char opcao;

    //Entrada de dados com validação
    printf("Valor 1 = ");
    while(scanf("%d", &num1) != 1){
        printf("<<ERRO>> Valor inválido.\nValor 1 = ");
        fflush(stdin);
    }
    printf("Valor 2 = ");
    while(scanf("%d", &num2) != 1){
    printf("<<ERRO>> Valor inválido.\nValor 2 = ");
    fflush(stdin);
    }

    //Opções de operações
    printf("========================\n");
    printf("+\tAdição\n");
    printf("-\tSubtração\n");
    printf("*\tMultiplicação\n");
    printf("/\tDivisão\n");
    printf("========================\n");

    //Escolha da opção

    printf("Digite sua opção => ");
    fflush(stdin);
    opcao = getchar();
    printf("------------------------\n");
    //Cálculo do resultado
    switch(opcao){
    case '+':
        res = num1 + num2;
        printf("O resultado de %d + %d\né igual a %d.\n", num1, num2, res);
        break;
    case '-':
        res = num1 - num2;
        printf("O resultado de %d - %d\né igual a %d.\n", num1, num2, res);
        break;
    case '*':
        res = num1 * num2;
        printf("O resultado de %d * %d\né igual a %d.\n", num1, num2, res);
        break;
    case '/':
        res = num1 / num2;
        printf("O resultado de %d / %d\né igual a %d.\n", num1, num2, res);
        break;
    default:
        printf("Não foi possível fazer\na operação.\nTente novamente.\n");
        break;
    }
     printf("------------------------\n");
     printf("VOLTE SEMPRE!\n");
}
