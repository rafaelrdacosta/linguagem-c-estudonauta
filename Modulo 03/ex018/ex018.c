/*Resolu��o Rafael Costa*/
#include<stdio.h>
#include<locale.h>
#include<time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("======= SERVI�O MILITAR v1.0 =======\n");

    //Declara��o de vari�veis
    int ano_atual, ano_nasc, idade;

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
            fflush(stdin); // Limpa o buffer para evitar loop infinito caso entrada seja inv�lida
        }
        if(ano_nasc > 1900){
            break;
        }else{
            printf("<<ERRO>> Ano inv�lido!\n");
        }
   }
    //Exibi��o da idade do usu�rio
    idade = ano_atual - ano_nasc;
    printf("------------------------------------\n");
    printf("Sua idade atual � %d anos.\n", idade);
    //Condi��o para verificar o alistamento
    if(idade >= 18){
        printf("J� fez 18 anos.\nEspero sinceramente que voc� j� tenha\nse alistado.\n");
    }else{
        printf("Voc� ainda n�o tem 18 anos.\nN�o pode se alistar!\n");
    }
    printf("====================================\n");
}
