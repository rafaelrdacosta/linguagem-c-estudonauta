/*Resolução Rafael Costa*/
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("===== OPERADORES BITWISE =====\n");

    //Declaração de variáveis
    int n1, n2;

    //Entrada de dados pelo usuário
    while(1){
        printf("Digite o primeiro valor: ");
        scanf("%d", &n1);
        if (n1 > 0){
            break;
        }else{
            printf("<<ERRO>> Número inválido! Digite novamente.\n");
        }
    }
    while(1){
        printf("Digite o segundo valor: ");
        scanf("%d", &n2);
        if (n2 > 0){
            break;
        }else{
            printf("<<ERRO>> Número inválido! Digite novamente.\n");
        }
    }
    //Exibição dos resultados
    printf("--------- RESULTADOS ---------\n");
    printf("Calculando %d & %d é igual a %d.\n", n1, n2, n1 & n2);
    printf("Calculando %d | %d é igual a %d.\n", n1, n2, n1 | n2);
    printf("Calculando %d ^ %d é igual a %d.\n", n1, n2, n1 ^ n2);
    printf("==============================\n");
}
