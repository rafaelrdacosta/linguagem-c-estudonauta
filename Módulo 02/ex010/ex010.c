/*Resolu��o Rafael Costa */

#include<stdio.h>
#include<locale.h>


void main(){
	setlocale(LC_ALL, "Portuguese");

	//Cabe�alho do programa
	printf("==== PRODUTO COM DESCONTO ====\n");

	//Declara��o de vari�veis
	float preco, n_preco, desconto;
	char nome [20];

	//Entrada de dados pelo usu�rio
	while(1){
		printf("Produto: ");
		scanf(" %19[^\n]", nome);
		if (strlen(nome) >= 3){
			break;
		} else{
			printf("<<ERRO>> Nome inv�lido! Tente novamente.\n");
		}
	}
	while(1){
        printf("Pre�o de(o) %s: R$ ", nome);
        scanf("%f", &preco);
        if(preco >= 0){
            break;
        } else{
			printf("<<ERRO>> Pre�o inv�lido! Tente novamente.\n");
		}
	}
    while(1){
        printf("Desconto (%%): ");
        scanf("%f", &desconto);
        if(desconto >= 0){
            break;
        } else{
			printf("<<ERRO>> Valor inv�lido! Tente novamente.\n");
		}
	}
	//C�lculo do desconto e novo pree�o
	n_preco = preco * (1 - (desconto/100));

	//Exibi��o dos resultados
	printf("O produto %s custava R$ %.2f,\nmas com %.2f%% de desconto, \npassa a custar R$ %.2f.\n", nome, preco, desconto, n_preco);
    printf("==============================\n");
}
