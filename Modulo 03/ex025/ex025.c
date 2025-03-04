/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("========== SERVI�O MILITAR v2.0 =========\n");

    //Declara��o de vari�veis
    int ano_atual, ano_nasc, idade, idade_alist, ano_alist;

    //Captura do ano atual no sistema
    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    ano_atual = data->tm_year + 1900;

    //Exibi��o do ano atual
    printf("Atualmente estamos no ano de %d.\n", ano_atual);

    //Entrada de dados com valida��o
    while(1){
        printf("Em que ano voc� nasceu (yyyy)? ");
        while(scanf("%d", &ano_nasc) != 1){
        printf("<<ERRO>> Ano inv�lido!\nEm que ano voc� nasceu (yyyy)? ");
        while(getchar() != '\n');
        }
        if(ano_nasc > 1900){
            break;
        } else{
            printf("<<ERRO>> Ano inv�lido!\n");
        }
    }
    //C�lculo das idades e ano alistamento
    idade = ano_atual - ano_nasc;
    ano_alist = ano_nasc + 18;
    //Exibi��o da idade
    printf("-----------------------------------------\n");
    printf("Sua idade atual � %d anos.\n", idade);

    //Verifica��o e exibi��o da condi��o de alistamento
    if(idade > 18){
        printf("Seu alistamento foi em %d.\nJ� se passaram %d anos.\n", ano_alist, (ano_atual - ano_alist));
    } else if (idade < 18){
        printf("Seu alistamento ser� em %d.\nAinda faltam %d anos.\n", ano_alist, (ano_alist - ano_atual));
    } else{
        printf("Voc� completa 18 anos exatamente em %d.\nV� se alistar!\n", ano_atual);
    }
    printf("=========================================\n");
}
