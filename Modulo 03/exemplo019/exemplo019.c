#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Estruturas de decisão aninhadas
    int n1, n2;

    printf("Primeiro valor: ");
    fflush(stdin);
    scanf("%d", &n1);

    printf("Segundo valor: ");
    fflush(stdin);
    scanf("%d", &n2);

    //if/else aninhados - 3 condições possíveis
    if (n1>n2){
        printf("n1 = %d é maior que n2 = %d.\n", n1, n2);
    } else{
        if(n2>n1){
           printf("n2 = %d é maior que n1 = %d.\n", n2, n1);
        } else{
            printf("Eles são iguais!\n");
        }
    }

    //ou pode ser mais simples com else if()
    if(n1>n2){
        printf("O maior é %d.", n1);
    } else if(n2>n1){
        printf("O maior é %d.", n2);
    } else{
        printf("Eles são iguais.\n");
    }
}
