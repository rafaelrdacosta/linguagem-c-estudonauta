/*Resolução Rafael Costa*/
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    //Cabeçalho do programa
    printf("==== Média do Aluno ====\n");

    //Declaração de variáveis
    float n1, n2, media;
    char nome[30];

    //Entrada de dados pelo usuário
    while(1){
        printf("Nome do aluno: ");
        scanf("%29[^\n]", nome);
        if(strlen(nome) >= 3){
            break;
        } else{
            printf("<<ERRO>> Nome inválido! Tente novamente.\n");
        }
    }
    while(1){
        printf("Nota 1: ");
        scanf("%f", &n1);
        if(n1 >=0 && n1 <= 10){
            break;
        } else{
            printf("<<ERRO>> Nota inválida! Tente novamente.\n");
        }
    }
    while(1){
        printf("Nota 2: ");
        scanf("%f", &n2);
        if(n2 >=0 && n2 <= 10){
            break;
        } else{
            printf("<<ERRO>> Nota inválida! Tente novamente.\n");
        }
    }
    //Cálculo da média
    media = (n1 + n2)/2;

    //Exibição dos resultados
    printf("O aluno %s tirou notas %.2f e %.2f\n e ficou com média %.2f.\n", nome, n1, n2, media);
    printf("========================\n");

}
