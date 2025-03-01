/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("== DOBRO E TERÇA PARTE ==\n");

    //Declaração de variáveis
    int num;
    float d = num / 3;

    //Entrada de dados pelo usuário
    printf("Digite um número: ");
    scanf("%d", &num);

    //Exibição dos resultados
    printf("Analisando o número %d:\n", num);
    printf("Seu dobro é %d.\n", num*2);
    printf("Sua terça parte é %.2f.\n", d);
    printf("=========================\n");
}
