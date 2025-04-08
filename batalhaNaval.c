#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    printf("*** Batalha Naval - Nível Aventureiro ***\n\n");
    // Alterei o vetor das colunas que antes era de letras para números para melhor referenciar os índices
    printf("   0 1 2 3 4 5 6 7 8 9\n");
    int i, j;
    int tabuleiro[10][10] = {0};

    //Exibindo o tabuleiro e posicionando 2 navios: um na horizontal e outro na vertical
    tabuleiro[2][2] = 3, tabuleiro[2][3] = 3, tabuleiro[2][4] = 3;
    tabuleiro[4][8] = 3, tabuleiro[5][8] = 3, tabuleiro[6][8] = 3;

    // Fiz uma pequena alteração usando "printf("%d  ", i);" que torna o vetor de linhas [i] destacada da matriz ao lado esquerdo
    for(i = 0; i < 10; i++){
        printf("%d  ", i);
        for(j = 0; j < 10; j++){
            //Duas estruturas condicionais que posicionam 2 navios na diagonal
            if(i == j && i > 5 && i < 9){
                tabuleiro[i][j] = 3;
            }
            if(i + j == 8 && i > -1 && i < 3 ){
                tabuleiro[i][j] = 3;
            }
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    printf("*** Batalha Naval - Nível Mestre ***");





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
