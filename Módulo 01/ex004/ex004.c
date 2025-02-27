/*
   Programa: Cadastro de Pessoas
   Resolução: Rafael Costa
   Descrição: Este programa cadastra nome, sexo e nota de 3 pessoas e exibe os dados formatados.
*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    //Declaração de variáveis
    char nome[3][40]; // Array de strings para armazenar 3 nomes
    char sexo[3];     // Array para armazenar os sexos
    float notas[3];   // Array para armazenar as notas
    //Cabeçalho do programa
    printf("====== CADASTRO DE PESSOAS ======\n");
    //Entrada de dados pelo usuário
    for(int i=0; i<3; i++){
        printf("Cadastrando a %dº pessoa: \n", i+1);
        printf("---------------------------------\n");
        //Cadastro do nome
        printf("Nome: ");
        scanf(" %39[^\n]", nome[i]); // Lê nome com espaços e limita a 29 caracteres
        printf("SEXO[M/F]: ");
        fflush(stdin);
        scanf("%c", &sexo[i]);
        printf("NOTA: ");
        scanf("%f", &notas[i]);
    }
    //Exibição dos resultados
    printf("Listagem completa\n");
    printf("---------------------------------\n");
    printf("%-22s%-7s%-4s\n", "NOME", "SEXO", "NOTA"); //%-22s - alinhamento das strings com base a esquerda
    for(int i=0; i<3; i++){
        printf("%-22s %-6c %-4.1f\n", nome[i], sexo[i], notas[i]);
    }
    printf("---------------------------------\n");
}
