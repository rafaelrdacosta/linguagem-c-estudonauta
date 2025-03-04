/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");


    //Cabe�alho do programa
    printf("SEU PESO NOS PLANETAS v1.0\n");

    //Declara��o de vari�veis
    float peso;
    int opcao;

    //Entrada de dados pelo usu�rio
    while(1){
        printf("Seu peso na terra(Kg): ");
        scanf("%f", &peso);
        if(peso > 0){
            break;
        } else{
            printf("<<ERRO>> Peso inv�lido!\nDigite novamente.\n");
        }
    }


    //Menu de op��es
    printf("\t  ESCOLHA UM PLANETA\n");
    printf("\t======================\n");
    printf("\t1\tMerc�rio\n");
    printf("\t2\tV�nus\n");
    printf("\t3\tMarte\n");
    printf("\t4\tJ�piter\n");
    printf("\t5\tSaturno\n");
    printf("\t6\tUrano\n");
    printf("\t======================\n");

    //Entrada de dados pelo usu�rio
    printf("\tDigite sua op��o => ");
    scanf("%d", &opcao);
    printf("--------------------------------\n");
    //C�lculo do peso
    switch(opcao){
    case 1:
        peso = peso * 0.37;
        printf("No planeta Merc�rio,\nseu peso seria %.2f Kg.\n", peso);
        break;
    case 2:
        peso = peso * 0.88;
         printf("No planeta V�nus,\nseu peso seria %.2f Kg.\n", peso);
        break;
    case 3:
        peso = peso * 0.38;
        printf("No planeta Marte,\nseu peso seria %.2f Kg.\n", peso);
        break;
    case 4:
        peso = peso * 2.64;
        printf("No planeta J�piter,\nseu peso seria %.2f Kg.\n", peso);
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
        printf("Seu peso n�o pode ser calculado\npara outros planetas.\nTente novamente.\n");
    }
    printf("--------------------------------\n");
    printf("VOLTE SEMPRE!\n");


}
