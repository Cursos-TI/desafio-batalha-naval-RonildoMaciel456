#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes do Incremento: %d\n",numero1);    //numero1 = numero1 + 1
    
    //numero1 += 1
    
    //Pós Incremento 
    //1º resultado = numero1
    //2º numero1++
    
    //Pré Icremento
    //1º ++numero1
    //2º resultado = numero1
    
    resultado = numero1++;
    printf("Após Pós - Incremento - Número1: %d - Resultado: %d\n",numero1,resultado);

    resultado = ++numero1;
    printf("Após Pré - Incremento - Número1: %d - Resultado: %d\n",numero1,resultado);

    //numero1 -= 1
    
    //Pós Decremento
    //1º resultado = numero1
    //2º numero1--

    //Pré Decremento 
    //1º --numero1
    //2º resultado = numero1

    resultado = numero1--;
    printf("Após Pós - Decremento - Número1: %d - Resultado: %d\n",numero1,resultado);
    resultado = --numero1;
    printf("Após Pré - Decremento - Número1: %d - Resultado: %d\n",numero1,resultado);









}