#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    //Declara��o de vari�veis
    char nome[10];
    //Inser��o de dados pelo usu�rio
    printf("Qual � o seu nome? ");
    scanf("%s", &nome);
    //Mensagem personalizada
    printf("Muito prazer em te conhecer %s!\n", nome);
    //Comando para parar o pragrama
    system("pause");
}
