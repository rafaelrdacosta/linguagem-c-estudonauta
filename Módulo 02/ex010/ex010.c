/*Resolução Rafael Costa */

#include<stdio.h>
#include<locale.h>


void main(){
	setlocale(LC_ALL, "Portuguese");

	//Cabeçalho do programa
	printf("==== PRODUTO COM DESCONTO ====\n");

	//Declaração de variáveis
	float preco, n_preco, desconto;
	char nome [20];

	//Entrada de dados pelo usuário
	while(1){
		printf("Produto: ");
		scanf(" %19[^\n]", nome);
		if (strlen(nome) >= 3){
			break;
		} else{
			printf("<<ERRO>> Nome inválido! Tente novamente.\n");
		}
	}
	while(1){
        printf("Preço de(o) %s: R$ ", nome);
        scanf("%f", &preco);
        if(preco >= 0){
            break;
        } else{
			printf("<<ERRO>> Preço inválido! Tente novamente.\n");
		}
	}
    while(1){
        printf("Desconto (%%): ");
        scanf("%f", &desconto);
        if(desconto >= 0){
            break;
        } else{
			printf("<<ERRO>> Valor inválido! Tente novamente.\n");
		}
	}
	//Cálculo do desconto e novo preeço
	n_preco = preco * (1 - (desconto/100));

	//Exibição dos resultados
	printf("O produto %s custava R$ %.2f,\nmas com %.2f%% de desconto, \npassa a custar R$ %.2f.\n", nome, preco, desconto, n_preco);
    printf("==============================\n");
}
