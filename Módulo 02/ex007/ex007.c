/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("== DOBRO E TERÇA PARTE ==\n");

    //Declaração de variáveis
    int num, dobro;
    float terca;

    //Entrada de dados pelo usuário
    printf("Digite um número: ");
    scanf("%i", &num);

    //Exibição dos resultados
    printf("Analisando o número %d:\n", num);
    terca = (float)num/3; //Coerção da variável "num" para float para divisão ser real
    dobro = num*2;
    printf("Seu dobro é %d.\n", dobro);
    printf("Sua terça parte é %.2f.\n", terca);
    printf("=========================\n");
}
