#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    /*Stings de formatação
    %d ou %i - int
    %f - float ou double
    %c - char
    %s - cadeia (string)
    %e - notação exponencial
    %hd - short int
    %ld - long int
    %hu - unsigned short
    %u - usnigned
    %lu - unsigned long
    */

    printf("O %s tem %d anos.\n", "Gustavo", 39);
    printf("Seu peso atual é de %.2f Kg.\n", 97.5);
    printf("O seu sexo é %c.\n", 'M');
}
