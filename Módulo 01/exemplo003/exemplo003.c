#include<stdio.h>
#include<locale.h>

/*Declara��o de vari�veis
    unsigned int idade = 19;
    char nome[] = "Z�";
    char *nome = "Ana";
    float media = 9.5;

    Regras para nomes de vari�veis
    - Tem come�ar com uma letra;
    - Case sensitive: use letras min�sculas;
    - s� usa letras, n�meros e sublinhado;
    - Nada de acentos;
    - N�o pode ter espa�os - pode separar com underline;
    - N�o pode ter s�mbolos (s� o sublinhado);
    - N�o pode ser uma palavra reservada.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");
    unsigned int idade = 33;
    float peso = 85.9;
    char sexo = 'M';
    char nome[] = "Juvenal"; //ou *nome

    printf("%s � do sexo %c, tem %i anos e pesa %.2f Kg.\n", nome, sexo, idade, peso);
}
