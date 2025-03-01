#include<stdio.h>
#include<locale.h>
#include<string.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    /* Funcionalidade da biblioteca string.h
    strcpy() - copiar um contéudo para uma string
    strlen() - devolve o cumprimento de uma string
    strcmp() - compara alfabeticamente duas strings (<0 - s1 é menor que s2,  =0 - iguais, >0 - s1 é maior que s2
    strcat() - concatena duas strings
    strupr() - converte os caracteres para maiúsculas
    strlwr() - converte os carcteres para minúsculas
    */

    char nome[10];
    strcpy(nome, "Gustavo");
    printf("Muito prazer %s.\n", nome);

    char sit[10];
    float media = 8.5;
    strcpy(sit, (media>=7)?"APROVADO":"REPROVADO");
    printf("O aluno está %s.\n", sit);


    char nome1[] = "Gustavo";
    int tam = strlen(nome);
    printf("O nome %s tem %i letras.\n", nome1, tam);

    char s1[] = "Gustavo ";
    char s2[] = "Guanabara";
    int res = strcmp(s1, s2);
    printf("O resultado da comparação é %i.\n", res);

    printf("%s\n", strcat(s1, s2));

    printf("%s\n", strupr(s1));

    printf("%s\n", strlwr(s2));
}
