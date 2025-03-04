/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("===== COLOQUE EM ORDEM =====\n");
    printf("Me diga três números e eu\ncolocarei eles em ordem para\nvocê.\n");

    //Declaração de variávies
    int n1, n2, n3;

    //Entrada de dados com validação
    printf("Primeiro número: ");
    while(scanf("%d", &n1) != 1){
        printf("<<ERRO>> Digite um número inteiro!\nPrimeiro número: ");
        fflush(stdin);
    }
    printf("Segundo número: ");
    while(scanf("%d", &n2) != 1){
        printf("<<ERRO>> Digite um número inteiro!\nSegundo número: ");
        fflush(stdin);
    }
    printf("Terceiro número: ");
    while(scanf("%d", &n3) != 1){
        printf("<<ERRO>> Digite um número inteiro!\nTerceiro número: ");
        fflush(stdin);
    }
    //Exibição do resultado
     printf("----------------------------\n");
    if(n2 > n1 && n3 > n2){
        printf("MAIOR: %d.\n", n3);
        printf("INTERMEDIÁRIO: %d.\n", n2);
        printf("MENOR: %d.\n", n1);
    } else if(n3 > n2 && n1 > n3){
        printf("MAIOR: %d.\n", n1);
        printf("INTERMEDIÁRIO: %d.\n", n3);
        printf("MENOR: %d.\n", n2);
    } else if(n1 > n3 && n2 > n1){
        printf("MAIOR: %d.\n", n2);
        printf("INTERMEDIÁRIO: %d.\n", n1);
        printf("MENOR: %d.\n", n3);
    }
     printf("============================\n");
}
