#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    char letras[] = "A B C D E F G H I J";
    int i, j;
    int tabuleiro[10][10] = {
        {0,},
        {1,},
        {2,},
        {3,},
        {4,},
        {5,},
        {6,},
        {7,},
        {8,},
        {9,}
    };
    //Exibindo o tabuleiro e posicionando 2 navios: um na horizontal e outro na vertical
    printf("%s\n", letras);
    tabuleiro[2][2] = 3, tabuleiro[2][3] = 3, tabuleiro[2][4] = 3;
    tabuleiro[4][8] = 3, tabuleiro[5][8] = 3, tabuleiro[6][8] = 3;
    
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(tabuleiro[i] == tabuleiro[j] && i > 5 && i < 9){
                tabuleiro[i][j] = 3;
            }
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.

    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
