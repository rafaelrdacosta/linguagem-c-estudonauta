#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    /*Incremento/Decremento
    x = x + 1 -> x += 1 --> x++
    y = y = 1 -> y -= 1 --> y--

    Pós incremento x++
    Pré incremento ++x
    */

    int n = 8;
    //Incremento - será somado um a n
    n++;
    printf("Incremento --> %d\n", n);

    //Decremento - será subtraído um de n, que agora está valendo 9
    n--;
    printf("Decremento --> %d\n", n);

    //Pós incremento
    int a = 5;
    int b = 3 + a++;

    printf("Os valores são %i e %i\n", a, b);

    //Pré incremento
    int c = 5;
    int d = 3 + ++c;

    printf("Os valores são %i e %i\n", c, d);
}
