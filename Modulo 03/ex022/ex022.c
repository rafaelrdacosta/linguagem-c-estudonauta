/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("============== CINEMA ESTUDONAUTA ==============\n");
    printf("HOR�RIO DO FILME: 19h - PRE�O DO INGRESSO: R$ 20\n");
    printf("------------------------------------------------\n");

    //Declara��o de vari�veis
    int valor, hora, min;

    //Captura da hora atual no sistema
    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    hora = data->tm_hour;
    min = data->tm_min;

    //Exibi��o da hora local
    printf("Agora s�o %dh:%dmin.\n", hora, min);

    //Entrada de dados com valida��o
    while(1){
        printf("Quanto dinheiro voc� tem: R$ ");
        while(scanf("%d", &valor) != 1){
            printf("<<ERRO>> Valor inv�lido!\nQuanto dinheiro voc� tem: R$ ");
            fflush(stdin);
        }
        if(valor > 0){
            break;
        }else{
            printf("<<ERRO>> Valor inv�lido!\n");
        }
    }

    //Verifica��o se � poss�vel comprar o ingresso
    if (valor >= 20 && hora < 19){
        printf("Voc� consegue comprar o ingresso!\nSeja bem-vindo!\n");
    }else{
        printf("Infelizmente n�o � poss�vel comprar o ingresso!\nVolte outro dia!\n");
    }
    printf("================================================\n");
}
