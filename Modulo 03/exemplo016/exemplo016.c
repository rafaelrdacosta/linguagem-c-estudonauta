#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float vel;

    printf("Digite a velocidade do automóvel: ");
    fflush(stdin);
    scanf("%f", &vel);

    if(vel>80){
        printf("Você foi multado!\n");
    }

    printf("Se beber não dirija!\n");

}
