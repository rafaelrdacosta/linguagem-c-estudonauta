/*
   Programa: Jogo de Adivinha��o
   Resolu��o: Rafael Costa
   Descri��o: Este programa gera um n�mero aleat�rio entre 1 e 5 e permite que o usu�rio tente adivinhar qual foi o n�mero escolhido.
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>


void main(){
    setlocale(LC_ALL, "Portuguese");
    //Cabe�alho do programa
    printf("========= SER� QUE VOC� ACERTA? =========\n");

    //Declara��o de vari�veis
    int num, nr;

    // Inicializa��o do gerador de n�meros aleat�rios
    srand(time(NULL));
    num = rand() % 5 + 1; //Vai gerar um n�mero entre 1 e 5

    //Entrada de dados pelo usu�rio
    printf("Vou pensar em n�mero entre 1 e 5.\nTente advinhar!");
    printf(" Qual � o seu palpite? ");
    scanf("%d", &nr);

    //Exibi��o dos resultados
    printf("Eu pensei no n�mero %d e voc� pensou no %d.\n", num, nr);
    printf("=========================================\n");

}
