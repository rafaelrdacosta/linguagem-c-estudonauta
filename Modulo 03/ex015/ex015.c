/*Resolu��o Rafael Costa*/
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("====== BONS ALUNOS MERECEM PARAB�NS ======\n");

    //Declara��o de vari�veis
    float nota1, nota2, media;

    //Entrada de dados pelo usu�rio
    while(1){
        printf("Digite a sua primeira nota: ");
        while(scanf("%f", &nota1) != 1){
             printf("<<ERRO>> Nota inv�lida!\nDigite a sua primeira nota: ");
             fflush(stdin);
        }
        if(nota1>=0 && nota1<=10){
            break;
        }else{
            printf("<<ERRO>> Nota inv�lida! Digite novamente.\n");
        }
    }
    while(1){
        printf("Digite a sua segunda nota: ");
        while(scanf("%f", &nota2) != 1){
             printf("<<ERRO>> Nota inv�lida!\nDigite a sua segunda nota: ");
             fflush(stdin);
        }
        if(nota2>=0 && nota2<=10){
            break;
        }else{
            printf("<<ERRO>> Nota inv�lida! Digite novamente.\n");
        }
    }
    //C�lculo da m�dia
    media = (nota1 + nota2)/2;

    //Exibi��o dos resultados
    printf("------------------------------------------\n");
    if(media >= 7){
        printf("MEUS PARAB�NS! ");
    }
    printf("A sua m�dia final foi %.1f.\n", media);
    printf("==========================================\n");
}
