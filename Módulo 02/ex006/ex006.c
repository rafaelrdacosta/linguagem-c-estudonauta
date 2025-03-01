/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    //Cabeçalho do programa
    printf("== ANTECESSOR E SUCESSOR ==\n");

    //Declaração de variáveis
    int num;

    //Entrada de dados pelo usuário
    printf("Digite um número: ");
    scanf("%d", &num);

    //Exibição do resultado
    printf("Analisando o número %d,\nseu antecessor é %d\ne seu sucessor é %d.\n", num, num - 1, num +1);
    printf("===========================\n");
}

