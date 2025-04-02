#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    getchar();

    printf("Digite o seu nome: \n");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matrícula: %d - ", nome, matricula);
    printf("Idade: %d - Altura: %.2f", idade, altura);

    return 0;
}