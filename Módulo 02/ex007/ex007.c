/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("== DOBRO E TER�A PARTE ==\n");

    //Declara��o de vari�veis
    int num;
    float d = num / 3;

    //Entrada de dados pelo usu�rio
    printf("Digite um n�mero: ");
    scanf("%d", &num);

    //Exibi��o dos resultados
    printf("Analisando o n�mero %d:\n", num);
    printf("Seu dobro � %d.\n", num*2);
    printf("Sua ter�a parte � %.2f.\n", d);
    printf("=========================\n");
}
