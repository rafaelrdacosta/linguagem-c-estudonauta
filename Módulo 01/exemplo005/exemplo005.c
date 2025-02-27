#include<stdio.h>
#include<locale.h>

/*Caracteres de formatação para os tipos de variáveis
    %d int
    %f float
    %c char
    %s cadeia
    %e notação
    %hd short int
    %ld long int
    %hu unsigned short int
    %u unsigned int ou char
    %lu unigned long int
 -> Lendo números
    int num;
    scanf("%d", &num); - para acessar o endereço da variável tem que usar "&"
 -> Lendo caracteres
    char resp;
    scanf("%c", &resp);
    ou
    resp = getchar();
 -> Lendo strings
    char nome[30];
    scanf("%s", nome); não precisa usar o "&"
    ou gets(nome);
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n;
    float m;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("Digite um número real: ");
    scanf(" %f", &m);
    printf("Você acabou de digitar os valores %d e %.1f. Obrigado!\n", n, m);

    char r;
    char s;
    printf("Digite só uma letra: ");
    fflush(stdin); //sempre que for ler um caracter usar a função para limpar o buffer do teclado para tirar o ENTER que foi presionado acima
    scanf("%c", &r);

    printf("Digite outra letra: ");
    fflush(stdin);
    s = getchar();
    printf("Você digitou as letras \"%c\" e \"%c\"", r, s);

    char nome[30];
    char nome_esp[30];
    char ender[40];
    printf("Digite seu nome: ");
    scanf("%s", nome);  //não lê espaços, então não serve para nomes completos ou duplos.
    printf("Você digitou \"%s\".\n", nome);

    printf("Digite o nome de seu cônjuge: ");
    fflush(stdin);
    gets(nome_esp);
    printf("Seu endereço: ");
    gets(ender); //Não precisou utilizar o fflush porque foi utilizado um gets acima
    printf("Você digitou \"%s\" que mora em \"%s\".\n", nome, ender);
}
