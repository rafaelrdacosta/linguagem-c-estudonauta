#include<stdio.h>
#include<locale.h>
//Resolu��o Rafael Costa

void main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Caracteres especiais\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\\a\t=\tBeep\n");
    printf("\\n\t=\tNova linha\n");
    printf("\\t\t=\tTabula��o\n");
    printf("\\\\\t=\tBarra\n");
    printf("%%%%\t=\tPorcentagem\n");
    printf("\\?\t=\tInterroga��o\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}
