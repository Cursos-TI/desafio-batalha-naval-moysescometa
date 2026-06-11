#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    // Vetores que representam os navios
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // Coordenadas iniciais dos navios
    int linhaHorizontal = 2;
    int colunaHorizontal = 3;

    int linhaVertical = 5;
    int colunaVertical = 7;

    int i, j;

    // Inicializa todo o tabuleiro com água (0)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Verifica se o navio horizontal cabe no tabuleiro
    if (colunaHorizontal + 3 <= 10) {

        // Posiciona o navio horizontal
        for (i = 0; i < 3; i++) {
            tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
        }
    }

    // Verifica se o navio vertical cabe no tabuleiro
    if (linhaVertical + 3 <= 10) {

        // Verifica se não há sobreposição
        if (tabuleiro[linhaVertical][colunaVertical] == 0 &&
            tabuleiro[linhaVertical + 1][colunaVertical] == 0 &&
            tabuleiro[linhaVertical + 2][colunaVertical] == 0) {

            // Posiciona o navio vertical
            for (i = 0; i < 3; i++) {
                tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
            }
        }
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Vetores que representam os navios diagonais
    int navioDiagonal1[3] = {3, 3, 3};
    int navioDiagonal2[3] = {3, 3, 3};

    // Coordenadas iniciais dos navios diagonais
    int linhaDiagonal1 = 0;
    int colunaDiagonal1 = 0;

    int linhaDiagonal2 = 0;
    int colunaDiagonal2 = 9;

    // Verifica se o navio diagonal principal cabe no tabuleiro
    if (linhaDiagonal1 + 3 <= 10 && colunaDiagonal1 + 3 <= 10) {

        // Verifica se não há sobreposição
        if (tabuleiro[linhaDiagonal1][colunaDiagonal1] == 0 &&
            tabuleiro[linhaDiagonal1 + 1][colunaDiagonal1 + 1] == 0 &&
            tabuleiro[linhaDiagonal1 + 2][colunaDiagonal1 + 2] == 0) {

            // Posiciona o navio diagonal principal
            for (i = 0; i < 3; i++) {
                tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] = navioDiagonal1[i];
            }
        }
    }

    // Verifica se o navio diagonal secundário cabe no tabuleiro
    if (linhaDiagonal2 + 3 <= 10 && colunaDiagonal2 - 2 >= 0) {

        // Verifica se não há sobreposição
        if (tabuleiro[linhaDiagonal2][colunaDiagonal2] == 0 &&
            tabuleiro[linhaDiagonal2 + 1][colunaDiagonal2 - 1] == 0 &&
            tabuleiro[linhaDiagonal2 + 2][colunaDiagonal2 - 2] == 0) {

            // Posiciona o navio diagonal secundário
            for (i = 0; i < 3; i++) {
                tabuleiro[linhaDiagonal2 + i][colunaDiagonal2 - i] = navioDiagonal2[i];
            }
        }
    }

    // Exibe o tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n");

    // Imprime as letras das colunas
    printf("   ");
    for (i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
    }

    printf("\n");

    // Imprime as linhas do tabuleiro
    for (i = 0; i < 10; i++) {

        // Número da linha
        printf("%2d ", i + 1);

        // Conteúdo da linha
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    return 0;
}