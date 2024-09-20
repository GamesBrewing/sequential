#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool isSafe(int board[], int row, int col, int n) {
    for (int i = 0; i < col; i++) {
        if (board[i] == row || abs(board[i] - row) == abs(i - col)) {
            return false;
        }
    }
    return true;
}

void printBoard(int board[], int col, int n)
{
    printf ("nQueen board:");
    for (int i = 0; i < n; i++) 
        {
        printf("%d ",board[i]);
        }
    printf ("\n");
}

void solveNQueensUtil(int board[], int col, int row, int n) {
    if (col >= n) // board is done and it just needs to print.
    {
        printBoard(board, 0, n);
        return;
    }
    if (col == 0)
    {
        board[col] = 0;
    }
    else{
        row = board[col -1] + 1;
    }
    if (board[col] == -1 & (isSafe(board, row, col, n)))
    {
        board[col] = row;
        
    }
    
    solveNQueensUtil(board, ++col, board[col], n);
    
}




