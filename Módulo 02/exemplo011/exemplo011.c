#include<stdio.h>
#include<locale.h>


void main(){
    setlocale(LC_ALL, "Portuguese");

    int a = 4, b = 13, c = 2;

    //Operador l�gico conjun��o
    printf("%s\n", a>b && a>c?"VERDADEIRO":"FALSO");

    //Operador l�gico disjun��o
    printf("%s\n", a>b || a>c?"VERDADEIRO":"FALSO");


    /*Preced�ncia
    < <= > >=
    == !=
    &&
    ||
    ?:
    Os primeiros de cima tem maior preced�ncia
    */
    printf("%s\n", a>b || a<c && !c!=4?"VERDAEIRO":"FALSO");
    /* F || V && !V
       F || V && F
       F || F
       F
    */
}
