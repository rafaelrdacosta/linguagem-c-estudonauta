/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("============ PAR OU �MPAR ============\n");

    //Declara��o de vari�veis
    int num;

    //Entrada de dados pelo usu�rio
    printf("Digite um n�mero: ");
    scanf("%i", &num);

    //Exibi��o do resultado
    printf("O n�mero %i que voc� digitou � %s!\n", num, (num%2 == 0)?"PAR":"IMPAR");
    printf("======================================\n");
}
