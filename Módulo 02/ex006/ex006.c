/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    //Cabe�alho do programa
    printf("== ANTECESSOR E SUCESSOR ==\n");

    //Declara��o de vari�veis
    int num;

    //Entrada de dados pelo usu�rio
    printf("Digite um n�mero: ");
    scanf("%d", &num);

    //Exibi��o do resultado
    printf("Analisando o n�mero %d,\nseu antecessor � %d\ne seu sucessor � %d.\n", num, num - 1, num +1);
    printf("===========================\n");
}

