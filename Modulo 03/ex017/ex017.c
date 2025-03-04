/*Resolução Rafael Costa*/
#include<stdio.h>
#include<locale.h>
#include<time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("=============== FILA DE BANCO ================\n");

    //Declaração de variáveis
    int ano_atual, ano_nasc, idade;

    //Captura do ano atual no sistema
    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    ano_atual = data->tm_year + 1900;

    // Entrada de dados com validação
    while(1){
        printf("Em que ano você nasceu (yyyy)?  ");
        while(scanf("%d", &ano_nasc) != 1){
            printf("<<ERRO>> Ano inválido!\nEm que ano você nasceu (yyyy)?  ");
            fflush(stdin); // Limpa o buffer para evitar loop infinito caso entrada seja inválida
        }
        if(ano_nasc >= 1900){
            break;
        } else{
            printf("<<ERRO>> Ano inválido! Digite novamente (yyyy).\n");
        }
    }
    //Cálculo e exibição da idade
    idade = ano_atual - ano_nasc;
    printf("----------------------------------------------\n");
    printf("Você tem %d anos, certo?\n", idade);
    printf("Seja bem-vindo(a) ao Banco Estudonauta!\n");
    //Exibição de mensagem para fila preferencial
    if(idade >= 65){
       printf("=== ATENÇÃO! DIRIJA-SE À FILA PREFERENCIAL ===\n");
    }
    printf("----------------------------------------------\n");
}
