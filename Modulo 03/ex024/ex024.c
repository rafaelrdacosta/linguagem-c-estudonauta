/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("===== COLOCANDO EM ORDEM =====\n");
    printf("Me diga dois números e eu\ncolocarei em ordem crescente.\n");

    //Declaração de variáveis
    int n1, n2;

    //Entrada de dados com validação
    printf("Primeiro número: ");
    while(scanf("%d", &n1) != 1){
        printf("<<ERRO>> Entrada inválida!\nDigite primeiro número: ");
        while(getchar() != '\n');
    }
    printf("Segundo número: ");
    while(scanf("%d", &n2) != 1){
        printf("<<ERRO>> Entrada inválida!\nDigite segundo número: ");
        while(getchar() != '\n');
    }
    //Exibição do resultado
    if(n1 < n2){
        printf("Os números em ordem são %i e %i.\n", n1, n2);
    } else if(n2 < n1){
        printf("Os números em ordem são %i e %i.\n", n2, n1);
    } else{
        printf("Os números são iguais.\n");
    }
    printf("==============================\n");
}
