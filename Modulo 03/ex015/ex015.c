/*Resolução Rafael Costa*/
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("====== BONS ALUNOS MERECEM PARABÉNS ======\n");

    //Declaração de variáveis
    float nota1, nota2, media;

    //Entrada de dados pelo usuário
    while(1){
        printf("Digite a sua primeira nota: ");
        while(scanf("%f", &nota1) != 1){
             printf("<<ERRO>> Nota inválida!\nDigite a sua primeira nota: ");
             fflush(stdin);
        }
        if(nota1>=0 && nota1<=10){
            break;
        }else{
            printf("<<ERRO>> Nota inválida! Digite novamente.\n");
        }
    }
    while(1){
        printf("Digite a sua segunda nota: ");
        while(scanf("%f", &nota2) != 1){
             printf("<<ERRO>> Nota inválida!\nDigite a sua segunda nota: ");
             fflush(stdin);
        }
        if(nota2>=0 && nota2<=10){
            break;
        }else{
            printf("<<ERRO>> Nota inválida! Digite novamente.\n");
        }
    }
    //Cálculo da média
    media = (nota1 + nota2)/2;

    //Exibição dos resultados
    printf("------------------------------------------\n");
    if(media >= 7){
        printf("MEUS PARABÉNS! ");
    }
    printf("A sua média final foi %.1f.\n", media);
    printf("==========================================\n");
}
