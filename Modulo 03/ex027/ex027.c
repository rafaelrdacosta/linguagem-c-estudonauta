/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("===== COLOQUE EM ORDEM =====\n");
    printf("Me diga tr�s n�meros e eu\ncolocarei eles em ordem para\nvoc�.\n");

    //Declara��o de vari�vies
    int n1, n2, n3;

    //Entrada de dados com valida��o
    printf("Primeiro n�mero: ");
    while(scanf("%d", &n1) != 1){
        printf("<<ERRO>> Digite um n�mero inteiro!\nPrimeiro n�mero: ");
        fflush(stdin);
    }
    printf("Segundo n�mero: ");
    while(scanf("%d", &n2) != 1){
        printf("<<ERRO>> Digite um n�mero inteiro!\nSegundo n�mero: ");
        fflush(stdin);
    }
    printf("Terceiro n�mero: ");
    while(scanf("%d", &n3) != 1){
        printf("<<ERRO>> Digite um n�mero inteiro!\nTerceiro n�mero: ");
        fflush(stdin);
    }
    //Exibi��o do resultado
     printf("----------------------------\n");
    if(n2 > n1 && n3 > n2){
        printf("MAIOR: %d.\n", n3);
        printf("INTERMEDI�RIO: %d.\n", n2);
        printf("MENOR: %d.\n", n1);
    } else if(n3 > n2 && n1 > n3){
        printf("MAIOR: %d.\n", n1);
        printf("INTERMEDI�RIO: %d.\n", n3);
        printf("MENOR: %d.\n", n2);
    } else if(n1 > n3 && n2 > n1){
        printf("MAIOR: %d.\n", n2);
        printf("INTERMEDI�RIO: %d.\n", n1);
        printf("MENOR: %d.\n", n3);
    }
     printf("============================\n");
}
