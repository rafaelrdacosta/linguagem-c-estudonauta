/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("============ ALFABETO ===========\n");

    //Declaração de variáveis
    char letra;

    //Entrada de dados pelo usuário
    printf("Digite uma letra: ");
    letra = getchar();

    //Exibição do resultado
    printf("Antes da letra %c temos a letra %c.\n", letra, letra - 1);
    printf("Depois da letra %c temos a letra %c.\n", letra, letra + 1);
    printf("=================================\n");
}
