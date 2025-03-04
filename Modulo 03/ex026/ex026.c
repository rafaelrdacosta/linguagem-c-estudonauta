/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>
#include<string.h>


void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("========= Qual é o seu ESTADO? =========\n");

    //Declaração de variáveis
    char estado [3]; // Espaço para duas letras + caractere nulo

    //Entrada de dados com validação
    while(1){
        printf("Em que estado do Brasil você nasceu? ");
        scanf("%2s", estado); // Limita a entrada a 2 caracteres

        strupr(estado);
        if (strlen(estado) == 2 && isalpha(estado[0]) && isalpha(estado[1])) {
            break; //isalpha - verdade caso estado[i] seja letra do alfabeto
        } else {
            printf("<< ERRO >> Estado inválido! Digite novamente.\n");
        }

    }

    //Exibição dos resultados
    if (strcmp(estado, "AC") == 0){
        printf("Nascendo no %s, você é Acreano.\n", estado);
    } else if (strcmp(estado, "AL") == 0){
        printf("Nascendo em %s, você é Alagoano.\n", estado);
    } else if (strcmp(estado, "AP") == 0){
        printf("Nascendo no %s, você é Amapaense.\n", estado);
    } else if (strcmp(estado, "AM") == 0){
        printf("Nascendo no %s, você é Amazonense.\n", estado);
    } else if (strcmp(estado, "BA") == 0){
        printf("Nascendo na %s, você é Baiano.\n", estado);
    } else if (strcmp(estado, "CE") == 0){
        printf("Nascendo no %s, você é Cearense.\n", estado);
    } else if (strcmp(estado, "DF") == 0){
        printf("Nascendo no %s, você é Bralisiense.\n", estado);
    } else if (strcmp(estado, "ES") == 0){
        printf("Nascendo no %s, você é Capixaba.\n", estado);
    } else if (strcmp(estado, "GO") == 0){
        printf("Nascendo em %s, você é Goiano.\n", estado);
    } else {
        printf("Nascendo em(no) %s você é natural dessa\ncidade, mas ainda não sei como te chamar!\n", estado);
    }
    printf("========================================\n");
}


