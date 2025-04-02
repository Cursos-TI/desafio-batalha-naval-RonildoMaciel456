#include <stdio.h>

int main() {

    //int a = 10, b = 5;

    //Operador Lógico && (e)
    //if (a > 0 && b > 0) {
        //printf("Os dois números são positivos \n");
    //} else {
        //printf("Pelo menos um dos números é negativo \n");
    //}

    //Operador Lógico || (ou)
    //if (a > 0 || b > 0) {
        //printf("Pelo menos um dos números é positivo \n");
    //} else {
        //printf("Os dois números são negativos \n");
    //}

    //Operador Lógico ! (não) (invertendo Valor Booleano 0 ou 1)
    //int a = 0;
    
    //se for verdadeira
    //if (!a) {
        //printf("A variável é zero\n");
    //se for falsa
    //} else {
        //printf("A variável não é zero\n");
    //}

    //Operador Lógico ! (não) (invertendo valor da variável)
    //int a = 10;
    
    //se for verdadeiro
    //if (!(a < 0)) {
        //printf("A váriável é positiva\n");
    //se for falso
    //} else {
        //printf("A variável é negativa\n");
    //}
    
    //Operadores Associatividade
    //int a = 5;
    //int b = 10;
    //int c = 1;

    //Ordem de Precedência segundo a Tabela de Associatividade dos Operadores Lógicos:
    //1º a > 0 = verdadeiro
    //2º b < 0 = falso
    //3º falso && falso = falso
    //4º falso || c == 0 (será testado 1º)
    //5º falso || falso (resultado de c == 0) = falso

    //if (a > 0 && b < 0 || c == 0) {
        //printf("A Condição é Verdadeira\n");
    //} else {
        //printf("A Condição é Falsa\n");
    //}

    //int idade = 30;
    //float altura = 1.76;

    //Ordem de Precedência segundo a Tabela de Associatividade dos Operadores Lógicos:
    //1º idade >= 18 = verdadeiro
    //2º idade <= 30 = verdadeiro
    //3º altura > 1.70 = verdadeiro
    //4º verdadeiro && verdaeiro (será testado 1º) && verdadeiro
    //5º veradeiro && veradeiro = verdadeiro

    //if (idade >= 18 && idade <= 30 && altura > 1.70) {
        //printf("Você está na faixa etária e tem altura adequada\n");
    //} else {
        //printf("Você não atende aos critérios\n");
    //}

    return 0;
}