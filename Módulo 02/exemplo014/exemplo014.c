#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    /*Operadores BIT a BIT (Bitwise)

    & CONJUNÇÃO
    | DISJUNÇÃO
    ^ DIJUNÇÃO EXCLUSIVA
    */

    //Conjunção
    int c = 25 & 12;
    printf("Conjunção = %i\n", c); //retorna 8

    //Disjunção
    int d = 25 | 12;
    printf("Disjunção = %i\n", d); //retorna 29

    //Disjunção exclusiva
    int e = 25 ^ 12;
    printf("Conjunção = %i", e); //retorna 21

}
