/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("== DOBRO E TER�A PARTE ==\n");

    //Declara��o de vari�veis
    int num, dobro;
    float terca;

    //Entrada de dados pelo usu�rio
    printf("Digite um n�mero: ");
    scanf("%i", &num);

    //Exibi��o dos resultados
    printf("Analisando o n�mero %d:\n", num);
    terca = (float)num/3; //Coer��o da vari�vel "num" para float para divis�o ser real
    dobro = num*2;
    printf("Seu dobro � %d.\n", dobro);
    printf("Sua ter�a parte � %.2f.\n", terca);
    printf("=========================\n");
}
