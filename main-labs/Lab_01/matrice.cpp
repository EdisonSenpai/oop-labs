#include "matrice.hpp"

void matrixCreation (int matrix[10][10], int &n) {

    cout << "Give the n for the superior triangular square matrix: ";
    cin >> n;
    cout << '\n';

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (j < i)
                matrix[i][j] = 0;

    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            cin >> matrix[i][j];

    cout << '\n';

}

void matrixPrint (int matrix[10][10], int n) {

    cout << "The matrix is:" << '\n';

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";

        cout << '\n';

    }

    cout << '\n';

}

void matrixSum (int matrix[10][10], int &n) {

    int sum = 0;

    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            sum += matrix[i][j];

    cout << "The sum of the elements is: " << sum << '\n';


}

void matrixVec (int matrix[10][10], int &n, int vec[10]) {

    for (int i = 0; i < n; i++)
        vec[i] = matrix[i][i];

}

void matrixVecSort (int vec[10], int &n) {

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (vec[i] > vec [j]) {

                int aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;

            }

}

void matrixVecSortPrint (int vec[10], int &n) {

    cout << "The sorted vector from the first diagonal of the matrix is: ";

    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";

    cout << '\n';

}
