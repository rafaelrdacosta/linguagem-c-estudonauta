#include<stdio.h>
#include<locale.h>


void main(){
    setlocale(LC_ALL, "Portuguese");

    int a = 4, b = 13, c = 2;

    //Operador lógico conjunção
    printf("%s\n", a>b && a>c?"VERDADEIRO":"FALSO");

    //Operador lógico disjunção
    printf("%s\n", a>b || a>c?"VERDADEIRO":"FALSO");


    /*Precedência
    < <= > >=
    == !=
    &&
    ||
    ?:
    Os primeiros de cima tem maior precedência
    */
    printf("%s\n", a>b || a<c && !c!=4?"VERDAEIRO":"FALSO");
    /* F || V && !V
       F || V && F
       F || F
       F
    */
}
