#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    /*Operador relacional tern�rio

    vari�vel = condi��o?express�o verdade:express�o falso;
    */

    int a = 4, b = 8;
    int c = (a>b)?1:2;
    printf("O resultado � %i\n", c);

    float media = 5.5;
    printf("Sua situa��o � %s.\n", (media>=7)?"Aprovado":"Reprovado");

    int n1, n2;
    printf("Digite um n�mero: ");
    scanf("%i", &n1);
    printf("Digite outro n�mero: ");
    scanf("%i", &n2);

    int maior = (n1>n2)?n1:n2;
    printf("Entre %i e %i, o maior n�mero � %i.", n1, n2, maior);
}
