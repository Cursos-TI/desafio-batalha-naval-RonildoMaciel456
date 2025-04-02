#include <stdio.h>

int main(){
    int idade = 31;
    float altura = 1.76;
    double salario = 2099.00;
    char opcao = 'R';
    char nome[20] = "ronildo";

    printf("A idade do %s é: %d\n",nome,idade);
    printf("A altura é: %.2f\n",altura);
    printf("A opção é: %c\n",'R');
    printf("O salário é: R$ %.2f\n",salario);

    return 0;
}