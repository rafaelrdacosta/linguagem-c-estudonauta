/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("=== INVERSO OU OPOSTO ====\n");

    //Declara��o de vari�veis
    int num;

    //Entrada de dados com valida�a�
    while(1){
        printf("Digite um n�mero: ");
        while( scanf("%d", &num) != 1){
            printf("<<ERRO>> Entrada inv�lida!\nDigite um n�mero: ");
            fflush(stdin);
        }
        if(num){
            break;
        }else{
            printf("<<ERRO>> Digite um n�mero!\n");
        }
    }
    //Exibi��o do resultado
    if(num > 0){
        printf("O inverso de %d � %.4f.\n", num, 1/(float)num);
    } else{
        printf("O oposto de %d � %d.\n", num, num*(-1));
    }
    printf("==========================\n");
}
