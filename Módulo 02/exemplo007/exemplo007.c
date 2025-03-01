#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    //Todas variáveis inteiras
    int x = 5;
    int y = 2;
    int z = x/y;
    printf("Divisão inteira = %i\n", z);

    //Somente a variável c float
    int a = 5;
    int b = 2;
    float c = a/b;
    printf("Divisão inteira = %.1f\n", c);

    //Uma variável n1 ou n2, float
    float n1 = 5;
    int n2 = 2;
    float d = n1/n2;
    printf("Divisão real (flutuante) = %.1f\n", d);

    //Coerção de tipo (typecast)
    int nr1 = 5;
    int nr2 = 2;
    float d2 = (float)nr1/nr2;
    printf("Divisão real (coerção) = %.1f\n", d2);
}
