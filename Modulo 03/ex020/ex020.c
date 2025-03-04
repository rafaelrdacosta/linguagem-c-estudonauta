/*Resolução Rafael Costa*/
#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    float preco, distancia, taxa;

    //Cabeçalho do programa
    printf("          VIAÇÃO ESTUDONAUTA\n\n");

    printf("============== TABELA DE PREÇOS ==============\n");
    printf("Viagens até 200 Km\t\tR$ 0.50/Km\n");
    printf("A partir de 200 Km\t\tR$ 0.35/Km\n");
    printf("----------------------------------------------\n");

    //Entrada de dados com validação
    while(1){
        printf("Distância total da viagem (Km): ");
        while(scanf("%f", &distancia) != 1){
           printf("<<ERRO>> Distância inválida!\nDistância total da viagem (Km): ");
           fflush(stdin);
        }
        if(distancia > 0){
            break;
        }else{
            printf("<<ERRO>> Distância inválida!\n");
        }
    }
    //Cálculo do preco
    if(distancia <= 200){
        taxa = 0.5;
    }else{
        taxa = 0.35;
    }
    preco = distancia * taxa;
    //Exibição dos valores
    printf("Uma viagem de %.1f Km, vai custar R$ %.2f/Km.\n", distancia, taxa);
    printf("Valor Total: R$ %.2f.\n", preco);
    printf("==============================================\n");
}
