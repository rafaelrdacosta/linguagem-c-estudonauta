/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cale�alho do programa
    printf("\t-------- PRE�O POR �POCA --------\n");

    //Declara��o de vari�veis
    float preco;
    int opcao;

    //Entrada de dados pelo usu�rio
    while(1){
        printf("Digite o pre�o de um produto: R$ ");

        while(scanf("%f", &preco) != 1){
            printf("<<ERRO>> Pre�o inv�lido!\nDigite o pre�o de um produto: R$ ");
            fflush(stdin);
        }
        if(preco > 0){
            break;
        } else{
            printf("<<ERRO>> Pre�o inv�lido!\n");
        }
    }
    //Menu de op��es
    printf("\t      ESCOLHA UM PER�ODO\n");
    printf("\t=================================\n");
    printf("\t1\tCarnaval [+10]\n");
    printf("\t2\tF�rias Escolares [+20]\n");
    printf("\t3\tDia das Crian�as [+5]\n");
    printf("\t4\tBlack Friday [-30]\n");
    printf("\t5\tNatal [-5]\n");
    printf("\t=================================\n");

    //Escolha da op��o pelo usu�rio
    printf("\tDigite sua op��o => ");
    scanf("%d", &opcao);

    //Exibi��o do preco de acordo com a op��o
    printf("\n-----------------------------------------\n");

    switch(opcao){
    case 1:
        preco = preco * 1.1;
        printf("Na �poca de Carnaval, o pre�o do produto\nvai para R$ %.2f.", preco);
        break;
    case 2:
        preco = preco * 1.2;
        printf("Na �poca de F�rias Escolares, o pre�o do\nproduto vai para R$ %.2f.", preco);
        break;
    case 3:
        preco = preco * 1.05;
        printf("Na �poca do Dias das Crian�as, o pre�o do\nproduto vai para R$ %.2f.", preco);
        break;
    case 4:
        preco = preco * 0.7;
        printf("Na �poca da Black Friday, o pre�o do\nproduto vai para R$ %.2f.", preco);
        break;
    case 5:
        preco = preco * 0.95;
        printf("Na �poca do Natal, o pre�o do produto vai\npara R$ %.2f.", preco);
        break;
    default:
        printf("Em �pocas assim, mantenha o pre�o do\nproduto em R$ %.2f.\n", preco);
    }
    printf("-----------------------------------------\n");
    printf("VOLTE SEMPRE!\n");
}
