#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {
    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Expandindo o tabuleiro para uma matriz 10x10.
    printf("*** Batalha Naval - Nível Aventureiro - Tabuleiro com 4 navios (333) ***\n\n");
    // Alterei o vetor das colunas que antes era de letras para números para melhor referenciar os índices
    printf("   0 1 2 3 4 5 6 7 8 9\n");
    int i, j;
    //variável da Matriz do Tabuleiro
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

    // Nível Mestre - Habilidades Especiais com Matrizes
    printf("*** Batalha Naval - Nível Mestre - Tabuleiro com Habilidades (Cone, Octaedro e Cruz) ***\n\n");
    // Linha que exibe os índices do vetor [y]
    printf("   0 1 2 3 4 5 6 7 8 9\n");
    //variáveis para manipular os vetores
    int x,y;
    //varíavel da Matriz do Tabuleiro2
    int tabuleiro2[10][10] = {0};
    //Loop aninhado para exibir a Matriz Tabuleiro[x][y]
    for(x = 0; x < 10; x++){
        printf("%d  ", x);
        for(y = 0; y < 10; y++){
            //Condicional para criar habilidade em "cone"
            if(x < 3 && y >= 2 - x && y <= 2 + x){
                tabuleiro2[x][y] = 1;
            }
            //Condicionais para criar habilidade em "octaedro"
            if(x >= 7 && x <= 8 && x - y == 5 && y < 4){
                tabuleiro2[x][y] = 1;
            }
            if(x >= 8 && x <= 9 && x - y == 7 && y < 3){
                tabuleiro2[x][y] = 1;
            }
            if(x == 8 && y== 2) {
                tabuleiro2[x][y] = 1;
            }
            //Condicionas para criar habilidade em "cruz"
            if(x > 3 && x < 7 && x % 2 == 0 && y == 7) {
                tabuleiro2[x][y] = 1;
            }
            if(x > 3 && x < 7 && x % 2 != 0 && y > 4 && y < 10) {
                tabuleiro2[x][y] = 1;
            }
            printf("%d ", tabuleiro2[x][y]);
        }
        printf("\n");
    }
        return 0;
}
