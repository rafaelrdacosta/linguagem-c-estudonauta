/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("============ ALFABETO ===========\n");

    //Declara��o de vari�veis
    char letra;

    //Entrada de dados pelo usu�rio
    printf("Digite uma letra: ");
    letra = getchar();

    //Exibi��o do resultado
    printf("Antes da letra %c temos a letra %c.\n", letra, letra - 1);
    printf("Depois da letra %c temos a letra %c.\n", letra, letra + 1);
    printf("=================================\n");
}
