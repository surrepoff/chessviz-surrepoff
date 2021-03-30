#include "board.h"
const int N = 9;

void RefreshChessboard(char Chessboard[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            Chessboard[i][j] = ' ';
    for (i = 1; i < N; i++)
        Chessboard[i][0] = 'a' + i - 1;
    for (j = 1; j < N; j++)
        Chessboard[0][j] = '1' + j - 1;

    for (i = 1; i < N; i++)
        Chessboard[i][2] = 'P';
    Chessboard[1][1] = 'R';
    Chessboard[8][1] = 'R';
    Chessboard[2][1] = 'N';
    Chessboard[7][1] = 'N';
    Chessboard[3][1] = 'B';
    Chessboard[6][1] = 'B';
    Chessboard[4][1] = 'Q';
    Chessboard[5][1] = 'K';

    for (i = 1; i < N; i++)
        Chessboard[i][7] = 'p';
    Chessboard[1][8] = 'r';
    Chessboard[8][8] = 'r';
    Chessboard[2][8] = 'n';
    Chessboard[7][8] = 'n';
    Chessboard[3][8] = 'b';
    Chessboard[6][8] = 'b';
    Chessboard[4][8] = 'q';
    Chessboard[5][8] = 'k';
}

void PrintChessboard(char Chessboard[N][N])
{
    int i, j;
    for (j = 8; j >= 0; j--) {
        for (i = 0; i <= 8; i++) {
            printf("%c ", Chessboard[i][j]);
        }
        printf("\n");
    }
}