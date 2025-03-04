/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("========== SERVIÇO MILITAR v2.0 =========\n");

    //Declaração de variáveis
    int ano_atual, ano_nasc, idade, idade_alist, ano_alist;

    //Captura do ano atual no sistema
    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    ano_atual = data->tm_year + 1900;

    //Exibição do ano atual
    printf("Atualmente estamos no ano de %d.\n", ano_atual);

    //Entrada de dados com validação
    while(1){
        printf("Em que ano você nasceu (yyyy)? ");
        while(scanf("%d", &ano_nasc) != 1){
        printf("<<ERRO>> Ano inválido!\nEm que ano você nasceu (yyyy)? ");
        while(getchar() != '\n');
        }
        if(ano_nasc > 1900){
            break;
        } else{
            printf("<<ERRO>> Ano inválido!\n");
        }
    }
    //Cálculo das idades e ano alistamento
    idade = ano_atual - ano_nasc;
    ano_alist = ano_nasc + 18;
    //Exibição da idade
    printf("-----------------------------------------\n");
    printf("Sua idade atual é %d anos.\n", idade);

    //Verificação e exibição da condição de alistamento
    if(idade > 18){
        printf("Seu alistamento foi em %d.\nJá se passaram %d anos.\n", ano_alist, (ano_atual - ano_alist));
    } else if (idade < 18){
        printf("Seu alistamento será em %d.\nAinda faltam %d anos.\n", ano_alist, (ano_alist - ano_atual));
    } else{
        printf("Você completa 18 anos exatamente em %d.\nVá se alistar!\n", ano_atual);
    }
    printf("=========================================\n");
}
