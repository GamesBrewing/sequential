#include "nqueens.h"
#include <time.h>

int main() {
    clock_t t = clock ();
    int n = 8;
    int* board = (int*)malloc(n * sizeof(int));
    if (board == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        board[i] = -1;
    }

    solveNQueensUtil(board, 0, 0, n);

    free(board);
    float totalTime = clock() - t;
    printf ("Program took %f seconds to execute", totalTime);
    return 0;
}
