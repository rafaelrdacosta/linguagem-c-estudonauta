/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("============== CINEMA ESTUDONAUTA ==============\n");
    printf("HORÁRIO DO FILME: 19h - PREÇO DO INGRESSO: R$ 20\n");
    printf("------------------------------------------------\n");

    //Declaração de variáveis
    int valor, hora, min;

    //Captura da hora atual no sistema
    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    hora = data->tm_hour;
    min = data->tm_min;

    //Exibição da hora local
    printf("Agora são %dh:%dmin.\n", hora, min);

    //Entrada de dados com validação
    while(1){
        printf("Quanto dinheiro você tem: R$ ");
        while(scanf("%d", &valor) != 1){
            printf("<<ERRO>> Valor inválido!\nQuanto dinheiro você tem: R$ ");
            fflush(stdin);
        }
        if(valor > 0){
            break;
        }else{
            printf("<<ERRO>> Valor inválido!\n");
        }
    }

    //Verificação se é possível comprar o ingresso
    if (valor >= 20 && hora < 19){
        printf("Você consegue comprar o ingresso!\nSeja bem-vindo!\n");
    }else{
        printf("Infelizmente não é possível comprar o ingresso!\nVolte outro dia!\n");
    }
    printf("================================================\n");
}
