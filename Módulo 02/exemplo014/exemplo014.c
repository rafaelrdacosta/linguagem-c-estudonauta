#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    /*Operadores BIT a BIT (Bitwise)

    & CONJUN��O
    | DISJUN��O
    ^ DIJUN��O EXCLUSIVA
    */

    //Conjun��o
    int c = 25 & 12;
    printf("Conjun��o = %i\n", c); //retorna 8

    //Disjun��o
    int d = 25 | 12;
    printf("Disjun��o = %i\n", d); //retorna 29

    //Disjun��o exclusiva
    int e = 25 ^ 12;
    printf("Conjun��o = %i", e); //retorna 21

}
