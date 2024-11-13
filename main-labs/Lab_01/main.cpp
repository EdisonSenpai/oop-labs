#include "matrice.hpp"

int main() {

    int n;
    int matrix[10][10];
    int vec[10];

    matrixCreation (matrix, n);
    matrixPrint (matrix, n);
    matrixSum (matrix, n);
    matrixVec (matrix, n, vec);
    matrixVecSort (vec, n);
    matrixVecSortPrint (vec, n);

    return 0;

}
