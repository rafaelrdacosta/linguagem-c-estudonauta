/*Resolução Rafael Costa*/
#include<stdio.h>
#include<locale.h>
#include<time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("======= SERVIÇO MILITAR v1.0 =======\n");

    //Declaração de variáveis
    int ano_atual, ano_nasc, idade;

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
            fflush(stdin); // Limpa o buffer para evitar loop infinito caso entrada seja inválida
        }
        if(ano_nasc > 1900){
            break;
        }else{
            printf("<<ERRO>> Ano inválido!\n");
        }
   }
    //Exibição da idade do usuário
    idade = ano_atual - ano_nasc;
    printf("------------------------------------\n");
    printf("Sua idade atual é %d anos.\n", idade);
    //Condição para verificar o alistamento
    if(idade >= 18){
        printf("Já fez 18 anos.\nEspero sinceramente que você já tenha\nse alistado.\n");
    }else{
        printf("Você ainda não tem 18 anos.\nNão pode se alistar!\n");
    }
    printf("====================================\n");
}
