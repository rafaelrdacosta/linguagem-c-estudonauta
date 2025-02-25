#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    //Declaração de variáveis
    char nome[10];
    //Inserção de dados pelo usuário
    printf("Qual é o seu nome? ");
    scanf("%s", &nome);
    //Mensagem personalizada
    printf("Muito prazer em te conhecer %s!\n", nome);
    //Comando para parar o pragrama
    system("pause");
}
