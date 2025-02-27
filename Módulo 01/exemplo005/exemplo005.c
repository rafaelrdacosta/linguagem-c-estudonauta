#include<stdio.h>
#include<locale.h>

/*Caracteres de formata��o para os tipos de vari�veis
    %d int
    %f float
    %c char
    %s cadeia
    %e nota��o
    %hd short int
    %ld long int
    %hu unsigned short int
    %u unsigned int ou char
    %lu unigned long int
 -> Lendo n�meros
    int num;
    scanf("%d", &num); - para acessar o endere�o da vari�vel tem que usar "&"
 -> Lendo caracteres
    char resp;
    scanf("%c", &resp);
    ou
    resp = getchar();
 -> Lendo strings
    char nome[30];
    scanf("%s", nome); n�o precisa usar o "&"
    ou gets(nome);
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n;
    float m;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &n);
    printf("Digite um n�mero real: ");
    scanf(" %f", &m);
    printf("Voc� acabou de digitar os valores %d e %.1f. Obrigado!\n", n, m);

    char r;
    char s;
    printf("Digite s� uma letra: ");
    fflush(stdin); //sempre que for ler um caracter usar a fun��o para limpar o buffer do teclado para tirar o ENTER que foi presionado acima
    scanf("%c", &r);

    printf("Digite outra letra: ");
    fflush(stdin);
    s = getchar();
    printf("Voc� digitou as letras \"%c\" e \"%c\"", r, s);

    char nome[30];
    char nome_esp[30];
    char ender[40];
    printf("Digite seu nome: ");
    scanf("%s", nome);  //n�o l� espa�os, ent�o n�o serve para nomes completos ou duplos.
    printf("Voc� digitou \"%s\".\n", nome);

    printf("Digite o nome de seu c�njuge: ");
    fflush(stdin);
    gets(nome_esp);
    printf("Seu endere�o: ");
    gets(ender); //N�o precisou utilizar o fflush porque foi utilizado um gets acima
    printf("Voc� digitou \"%s\" que mora em \"%s\".\n", nome, ender);
}
