#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    /*Operador relacional ternário

    variável = condição?expressão verdade:expressão falso;
    */

    int a = 4, b = 8;
    int c = (a>b)?1:2;
    printf("O resultado é %i\n", c);

    float media = 5.5;
    printf("Sua situação é %s.\n", (media>=7)?"Aprovado":"Reprovado");

    int n1, n2;
    printf("Digite um número: ");
    scanf("%i", &n1);
    printf("Digite outro número: ");
    scanf("%i", &n2);

    int maior = (n1>n2)?n1:n2;
    printf("Entre %i e %i, o maior número é %i.", n1, n2, maior);
}
