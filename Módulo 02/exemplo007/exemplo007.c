#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    //Todas vari�veis inteiras
    int x = 5;
    int y = 2;
    int z = x/y;
    printf("Divis�o inteira = %i\n", z);

    //Somente a vari�vel c float
    int a = 5;
    int b = 2;
    float c = a/b;
    printf("Divis�o inteira = %.1f\n", c);

    //Uma vari�vel n1 ou n2, float
    float n1 = 5;
    int n2 = 2;
    float d = n1/n2;
    printf("Divis�o real (flutuante) = %.1f\n", d);

    //Coer��o de tipo (typecast)
    int nr1 = 5;
    int nr2 = 2;
    float d2 = (float)nr1/nr2;
    printf("Divis�o real (coer��o) = %.1f\n", d2);
}
