/*Resolu��o Rafael Costa*/
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    float preco, distancia, taxa;

    //Cabe�alho do programa
    printf("          VIA��O ESTUDONAUTA\n\n");

    printf("============== TABELA DE PRE�OS ==============\n");
    printf("Viagens at� 200 Km\t\tR$ 0.50/Km\n");
    printf("A partir de 200 Km\t\tR$ 0.35/Km\n");
    printf("----------------------------------------------\n");

    //Entrada de dados com valida��o
    while(1){
        printf("Dist�ncia total da viagem (Km): ");
        while(scanf("%f", &distancia) != 1){
           printf("<<ERRO>> Dist�ncia inv�lida!\nDist�ncia total da viagem (Km): ");
           fflush(stdin);
        }
        if(distancia > 0){
            break;
        }else{
            printf("<<ERRO>> Dist�ncia inv�lida!\n");
        }
    }
    //C�lculo do preco
    if(distancia <= 200){
        taxa = 0.5;
    }else{
        taxa = 0.35;
    }
    preco = distancia * taxa;
    //Exibi��o dos valores
    printf("Uma viagem de %.1f Km, vai custar R$ %.2f/Km.\n", distancia, taxa);
    printf("Valor Total: R$ %.2f.\n", preco);
    printf("==============================================\n");
}
