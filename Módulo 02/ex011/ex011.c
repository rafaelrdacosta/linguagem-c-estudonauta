/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("============ PAR OU ÍMPAR ============\n");

    //Declaração de variáveis
    int num;

    //Entrada de dados pelo usuário
    printf("Digite um número: ");
    scanf("%i", &num);

    //Exibição do resultado
    printf("O número %i que você digitou é %s!\n", num, (num%2 == 0)?"PAR":"IMPAR");
    printf("======================================\n");
}
