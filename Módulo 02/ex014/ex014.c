/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("== OPERADORES DE DESLOCAMENTO ==\n");

    //Declara��o de vari�veis
    int num, desl;

    //Entrada de dados pelo usu�rio
    while(1){
        printf("Digite um n�mero: ");
        scanf("%d", &num);
        if (num > 0){
            break;
        }else{
            printf("<<ERRO>> N�mero inv�lido! Digite novamente.\n");
        }
    }
    while(1){
        printf("Digite o deslocamento: ");
        scanf("%d", &desl);
        if (desl > 0){
            break;
        }else{
            printf("<<ERRO>> Deslocamento inv�lido! Digite novamente.\n");
        }
    }
    //Exibi��o dos resultados
    printf("-------- OPERA��ES SHIFT --------\n");
    printf("Calculando %d >> %d � igual a %d.\n", num, desl, num >> desl);
    printf("Calculando %d << %d � igual a %d.\n", num, desl, num << desl);
    printf("=================================\n");
}
