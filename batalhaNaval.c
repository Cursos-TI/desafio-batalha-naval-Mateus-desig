#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

// Inicializando o tabuleiro.
void initializeBoard(int board[10][10], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            board[i][j] = 0;
        }
    }
}

// Exibir tabuleiro.
void printBoard(int board[10][10], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int k = 0; k < size; k++)
        {
            printf("%d ", board[i][k]);
        }
        printf("\n");
    }
}

// Navio orizontal.
void placeHorizontalShip(int board[10][10], int row, int coldStart, int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        board[row][coldStart + i] = 3;
    }
}

// Navio orizontal.
void placeVerticalShip(int board[10][10], int col, int rowStart, int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        board[rowStart + i][col] = 3;
    }
}

// Navio diagonal.
void placeDiagonalShip(int board[10][10], int rowStart, int coldStart, int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        board[rowStart + i][coldStart + i] = 3;
    }
}

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
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

    int size = 10;
    int board[10][10];

    // Inicializando o tabuleiro.
    initializeBoard(board, size);

    // Posicionando o primeiro navio horizontal (na linha 3).
    placeHorizontalShip(board, 3, 0, 4);

    // Posicionando o segundo navio vertical (na coluna 5).
    placeVerticalShip(board, 5, 0, 3);

    // Posicionando o terceiro navio diagonal (da posição 7,7 até 9,9)
    placeDiagonalShip(board, 7, 7, 3);

    // Exibir o tabuleiro.
    printf("Tabuleiro (10x10):\n");
    printBoard(board, size);

    return 0;
}
