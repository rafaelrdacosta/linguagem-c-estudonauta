/*Resolu��o Rafael Costa*/
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("===== OPERADORES BITWISE =====\n");

    //Declara��o de vari�veis
    int n1, n2;

    //Entrada de dados pelo usu�rio
    while(1){
        printf("Digite o primeiro valor: ");
        scanf("%d", &n1);
        if (n1 > 0){
            break;
        }else{
            printf("<<ERRO>> N�mero inv�lido! Digite novamente.\n");
        }
    }
    while(1){
        printf("Digite o segundo valor: ");
        scanf("%d", &n2);
        if (n2 > 0){
            break;
        }else{
            printf("<<ERRO>> N�mero inv�lido! Digite novamente.\n");
        }
    }
    //Exibi��o dos resultados
    printf("--------- RESULTADOS ---------\n");
    printf("Calculando %d & %d � igual a %d.\n", n1, n2, n1 & n2);
    printf("Calculando %d | %d � igual a %d.\n", n1, n2, n1 | n2);
    printf("Calculando %d ^ %d � igual a %d.\n", n1, n2, n1 ^ n2);
    printf("==============================\n");
}
