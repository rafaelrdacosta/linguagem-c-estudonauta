/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("===== COLOCANDO EM ORDEM =====\n");
    printf("Me diga dois n�meros e eu\ncolocarei em ordem crescente.\n");

    //Declara��o de vari�veis
    int n1, n2;

    //Entrada de dados com valida��o
    printf("Primeiro n�mero: ");
    while(scanf("%d", &n1) != 1){
        printf("<<ERRO>> Entrada inv�lida!\nDigite primeiro n�mero: ");
        while(getchar() != '\n');
    }
    printf("Segundo n�mero: ");
    while(scanf("%d", &n2) != 1){
        printf("<<ERRO>> Entrada inv�lida!\nDigite segundo n�mero: ");
        while(getchar() != '\n');
    }
    //Exibi��o do resultado
    if(n1 < n2){
        printf("Os n�meros em ordem s�o %i e %i.\n", n1, n2);
    } else if(n2 < n1){
        printf("Os n�meros em ordem s�o %i e %i.\n", n2, n1);
    } else{
        printf("Os n�meros s�o iguais.\n");
    }
    printf("==============================\n");
}
