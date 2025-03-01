#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    /*Incremento/Decremento
    x = x + 1 -> x += 1 --> x++
    y = y = 1 -> y -= 1 --> y--

    P�s incremento x++
    Pr� incremento ++x
    */

    int n = 8;
    //Incremento - ser� somado um a n
    n++;
    printf("Incremento --> %d\n", n);

    //Decremento - ser� subtra�do um de n, que agora est� valendo 9
    n--;
    printf("Decremento --> %d\n", n);

    //P�s incremento
    int a = 5;
    int b = 3 + a++;

    printf("Os valores s�o %i e %i\n", a, b);

    //Pr� incremento
    int c = 5;
    int d = 3 + ++c;

    printf("Os valores s�o %i e %i\n", c, d);
}
