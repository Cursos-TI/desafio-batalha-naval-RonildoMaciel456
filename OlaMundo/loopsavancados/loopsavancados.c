#include <stdio.h>

void recursivo(int numero) {
    if (numero > 0){
        printf("%d \n", numero);

        recursivo(numero - 1);
    }
}


int main () {
    
    //loop com multíplas variáveis
    /*
    for (int i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d \n", i, j);
    }
    */

    int quantidade = 10;

    printf("Contagem regressiva...\n");
    recursivo(quantidade);
























    return 0;
}