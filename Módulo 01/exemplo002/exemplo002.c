#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    /*Stings de formata��o
    %d ou %i - int
    %f - float ou double
    %c - char
    %s - cadeia (string)
    %e - nota��o exponencial
    %hd - short int
    %ld - long int
    %hu - unsigned short
    %u - usnigned
    %lu - unsigned long
    */

    printf("O %s tem %d anos.\n", "Gustavo", 39);
    printf("Seu peso atual � de %.2f Kg.\n", 97.5);
    printf("O seu sexo � %c.\n", 'M');
}
