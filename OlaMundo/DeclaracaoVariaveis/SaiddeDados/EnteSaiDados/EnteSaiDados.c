#include <stdio.h>

int main(){
    char nome[20];
    int idade;
    float altura;
    int peso;
    double saldoBancario;
    char opcao;

    printf("Digite o seu nome: \n");
    scanf("%s",nome);
    printf("O nome é: %s\n",nome);

    printf("Digite a sua idade: \n");
    scanf("%d",&idade);
    printf("A idade é: %d anos\n",idade);

    printf("Digite a sua altura: \n");
    scanf("%f",&altura);
    printf("A altura é: %.2f cm\n",altura);

    printf("Digite o seu peso: \n");
    scanf("%d",&peso);
    printf("O peso é: %d Kg\n",peso);

    printf("Qual é a opção?: \n");
    scanf(" %c",&opcao);
    printf("A opção é: %c",opcao);

    return 0;
}