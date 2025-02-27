#include<stdio.h>
#include<locale.h>

/*Declaração de variáveis
    unsigned int idade = 19;
    char nome[] = "Zé";
    char *nome = "Ana";
    float media = 9.5;

    Regras para nomes de variáveis
    - Tem começar com uma letra;
    - Case sensitive: use letras minúsculas;
    - só usa letras, números e sublinhado;
    - Nada de acentos;
    - Não pode ter espaços - pode separar com underline;
    - Não pode ter símbolos (só o sublinhado);
    - Não pode ser uma palavra reservada.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");
    unsigned int idade = 33;
    float peso = 85.9;
    char sexo = 'M';
    char nome[] = "Juvenal"; //ou *nome

    printf("%s é do sexo %c, tem %i anos e pesa %.2f Kg.\n", nome, sexo, idade, peso);
}
