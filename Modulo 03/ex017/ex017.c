/*Resolu��o Rafael Costa*/
#include<stdio.h>
#include<locale.h>
#include<time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("=============== FILA DE BANCO ================\n");

    //Declara��o de vari�veis
    int ano_atual, ano_nasc, idade;

    //Captura do ano atual no sistema
    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    ano_atual = data->tm_year + 1900;

    // Entrada de dados com valida��o
    while(1){
        printf("Em que ano voc� nasceu (yyyy)?  ");
        while(scanf("%d", &ano_nasc) != 1){
            printf("<<ERRO>> Ano inv�lido!\nEm que ano voc� nasceu (yyyy)?  ");
            fflush(stdin); // Limpa o buffer para evitar loop infinito caso entrada seja inv�lida
        }
        if(ano_nasc >= 1900){
            break;
        } else{
            printf("<<ERRO>> Ano inv�lido! Digite novamente (yyyy).\n");
        }
    }
    //C�lculo e exibi��o da idade
    idade = ano_atual - ano_nasc;
    printf("----------------------------------------------\n");
    printf("Voc� tem %d anos, certo?\n", idade);
    printf("Seja bem-vindo(a) ao Banco Estudonauta!\n");
    //Exibi��o de mensagem para fila preferencial
    if(idade >= 65){
       printf("=== ATEN��O! DIRIJA-SE � FILA PREFERENCIAL ===\n");
    }
    printf("----------------------------------------------\n");
}
