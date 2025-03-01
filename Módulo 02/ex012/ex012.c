/*Resolução Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho do programa
    printf("===== SITUAÇÃO DO ALUNO =====\n");

    //Declaração de variáveis
    float n1, n2, media;

    //Entrada de dados pelo usuário
    while(1){
        printf("Primeira nota: ");
        scanf("%f", &n1);
        //Verificação se a nota é válida
        if(n1>=0 && n1<=10){
            break;
        } else{
            printf("<<ERRO>> Nota inválida! Digite novamente.\n");
        }
    }
    while(1){
        printf("Segunda nota: ");
        scanf("%f", &n2);
        //Verificação se a nota é válida
        if(n2>=0 && n2<=10){
            break;
        } else{
            printf("<<ERRO>> Nota inválida! Digite novamente.\n");
        }
    }
    //Cálculo da media
    media = (n1 + n2)/2;

    //Exibição do resultado
    printf("Com as notas %.1f e %.1f,\n", n1, n2);
    printf("a média do aluno foi %.1f.\n", media);
    printf("O aluno está %s!\n", (media>=7)?"APROVADO":"REPROVADO");
    printf("=============================\n");

}
