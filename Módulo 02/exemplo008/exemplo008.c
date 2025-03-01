#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    /*Operadores relacionais
    Sempre retornam um valor lógico
    Em C
    Verdadeiro retorna 1
    Falso retorna 0
    */

    int a = 8;
    int b = 6;
    int c = (a<=b);
    printf("O resultado é %i", c);

}
