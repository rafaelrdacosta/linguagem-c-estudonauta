/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("=== INVERSO OU OPOSTO ====\n");

    //Declaração de variáveis
    int num;

    //Entrada de dados com validaçaõ
    while(1){
        printf("Digite um número: ");
        while( scanf("%d", &num) != 1){
            printf("<<ERRO>> Entrada inválida!\nDigite um número: ");
            fflush(stdin);
        }
        if(num){
            break;
        }else{
            printf("<<ERRO>> Digite um número!\n");
        }
    }
    //Exibição do resultado
    if(num > 0){
        printf("O inverso de %d é %.4f.\n", num, 1/(float)num);
    } else{
        printf("O oposto de %d é %d.\n", num, num*(-1));
    }
    printf("==========================\n");
}
