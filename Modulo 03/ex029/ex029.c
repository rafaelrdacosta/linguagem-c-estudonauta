/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");


    //Cabeçalho do programa
    printf("SEU PESO NOS PLANETAS v1.0\n");

    //Declaração de variáveis
    float peso;
    int opcao;

    //Entrada de dados pelo usuário
    while(1){
        printf("Seu peso na terra(Kg): ");
        scanf("%f", &peso);
        if(peso > 0){
            break;
        } else{
            printf("<<ERRO>> Peso inválido!\nDigite novamente.\n");
        }
    }


    //Menu de opções
    printf("\t  ESCOLHA UM PLANETA\n");
    printf("\t======================\n");
    printf("\t1\tMercúrio\n");
    printf("\t2\tVênus\n");
    printf("\t3\tMarte\n");
    printf("\t4\tJúpiter\n");
    printf("\t5\tSaturno\n");
    printf("\t6\tUrano\n");
    printf("\t======================\n");

    //Entrada de dados pelo usuário
    printf("\tDigite sua opção => ");
    scanf("%d", &opcao);
    printf("--------------------------------\n");
    //Cálculo do peso
    switch(opcao){
    case 1:
        peso = peso * 0.37;
        printf("No planeta Mercúrio,\nseu peso seria %.2f Kg.\n", peso);
        break;
    case 2:
        peso = peso * 0.88;
         printf("No planeta Vênus,\nseu peso seria %.2f Kg.\n", peso);
        break;
    case 3:
        peso = peso * 0.38;
        printf("No planeta Marte,\nseu peso seria %.2f Kg.\n", peso);
        break;
    case 4:
        peso = peso * 2.64;
        printf("No planeta Júpiter,\nseu peso seria %.2f Kg.\n", peso);
        break;
    case 5:
        peso = peso * 1.15;
        printf("No planeta Saturno,\nseu peso seria %.2f Kg.\n", peso);
        break;
    case 6:
        peso = peso * 1.17;
        printf("No planeta Urano,\nseu peso seria %.2f Kg.\n", peso);
        break;
    default:
        printf("Seu peso não pode ser calculado\npara outros planetas.\nTente novamente.\n");
    }
    printf("--------------------------------\n");
    printf("VOLTE SEMPRE!\n");


}
