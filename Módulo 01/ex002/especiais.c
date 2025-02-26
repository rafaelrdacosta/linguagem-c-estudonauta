#include<stdio.h>
#include<locale.h>
//Resolução Rafael Costa

void main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Caracteres especiais\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\\a\t=\tBeep\n");
    printf("\\n\t=\tNova linha\n");
    printf("\\t\t=\tTabulação\n");
    printf("\\\\\t=\tBarra\n");
    printf("%%%%\t=\tPorcentagem\n");
    printf("\\?\t=\tInterrogação\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}
