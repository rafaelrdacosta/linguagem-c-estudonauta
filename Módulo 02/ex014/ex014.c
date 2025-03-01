/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("== OPERADORES DE DESLOCAMENTO ==\n");

    //Declaração de variáveis
    int num, desl;

    //Entrada de dados pelo usuário
    while(1){
        printf("Digite um número: ");
        scanf("%d", &num);
        if (num > 0){
            break;
        }else{
            printf("<<ERRO>> Número inválido! Digite novamente.\n");
        }
    }
    while(1){
        printf("Digite o deslocamento: ");
        scanf("%d", &desl);
        if (desl > 0){
            break;
        }else{
            printf("<<ERRO>> Deslocamento inválido! Digite novamente.\n");
        }
    }
    //Exibição dos resultados
    printf("-------- OPERAÇÕES SHIFT --------\n");
    printf("Calculando %d >> %d é igual a %d.\n", num, desl, num >> desl);
    printf("Calculando %d << %d é igual a %d.\n", num, desl, num << desl);
    printf("=================================\n");
}
