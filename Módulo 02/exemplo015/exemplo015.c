#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    /*Operados BIT a BIT (Bitwise)
    >> Right shift
    << Left shift
    */

    //Left shift
    int n = 12 << 2;
    printf("Left shift = %d.\n", n);

    //Right shift
    int a = 19 >> 2;
    printf("Right shift = %d.\n", a);
}
