/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Caleçalho do programa
    printf("\t-------- PREÇO POR ÉPOCA --------\n");

    //Declaração de variáveis
    float preco;
    int opcao;

    //Entrada de dados pelo usuário
    while(1){
        printf("Digite o preço de um produto: R$ ");

        while(scanf("%f", &preco) != 1){
            printf("<<ERRO>> Preço inválido!\nDigite o preço de um produto: R$ ");
            fflush(stdin);
        }
        if(preco > 0){
            break;
        } else{
            printf("<<ERRO>> Preço inválido!\n");
        }
    }
    //Menu de opções
    printf("\t      ESCOLHA UM PERÍODO\n");
    printf("\t=================================\n");
    printf("\t1\tCarnaval [+10]\n");
    printf("\t2\tFérias Escolares [+20]\n");
    printf("\t3\tDia das Crianças [+5]\n");
    printf("\t4\tBlack Friday [-30]\n");
    printf("\t5\tNatal [-5]\n");
    printf("\t=================================\n");

    //Escolha da opção pelo usuário
    printf("\tDigite sua opção => ");
    scanf("%d", &opcao);

    //Exibição do preco de acordo com a opção
    printf("\n-----------------------------------------\n");

    switch(opcao){
    case 1:
        preco = preco * 1.1;
        printf("Na época de Carnaval, o preço do produto\nvai para R$ %.2f.", preco);
        break;
    case 2:
        preco = preco * 1.2;
        printf("Na época de Férias Escolares, o preço do\nproduto vai para R$ %.2f.", preco);
        break;
    case 3:
        preco = preco * 1.05;
        printf("Na época do Dias das Crianças, o preço do\nproduto vai para R$ %.2f.", preco);
        break;
    case 4:
        preco = preco * 0.7;
        printf("Na época da Black Friday, o preço do\nproduto vai para R$ %.2f.", preco);
        break;
    case 5:
        preco = preco * 0.95;
        printf("Na época do Natal, o preço do produto vai\npara R$ %.2f.", preco);
        break;
    default:
        printf("Em épocas assim, mantenha o preço do\nproduto em R$ %.2f.\n", preco);
    }
    printf("-----------------------------------------\n");
    printf("VOLTE SEMPRE!\n");
}
