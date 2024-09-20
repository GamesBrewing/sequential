#include "matrixMul.h"

int main() {

    clock_t t = clock ();
    // Static allocation of matrices
    int A[N][N];
    int B[N][N];
    int C[N][N];

    printf("Matrices allocated successfully.\n");

    // Initialize matrices A and B
    for (int i = 0; i < N; ++i) {  //column
        for (int j = 0; j < N; ++j) {  //row
            A[i][j] = 1; 
            B[i][j] = 1;
            C[i][j] = 0;
        }
    }

    printf("Matrices initialized successfully.\n");

    matrixMultiply(A, B, C);

    printf("Matrix multiplication complete!\n");

    // Display the resulting matrix C
    printf("Resulting Matrix C:\n");
    displayMatrix(C);
    float totalTime = clock() - t;
    printf ("Program took %f seconds to execute", totalTime);
    return 0;
}
