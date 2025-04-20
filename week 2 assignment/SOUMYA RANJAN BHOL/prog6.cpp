#include <iostream>
using namespace std;
const int SIZE = 3;
void inputMatrix(int matrix[SIZE][SIZE], const string& name) {
    cout << "Enter elements of " << name << " matrix (" << SIZE << "x" << SIZE << "):\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> matrix[i][j];
        }
    }
}
void printMatrix(int matrix[SIZE][SIZE], const string& title) {
    cout << title << ":\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void addMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}
void transposeMatrix(int matrix[SIZE][SIZE], int transposed[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}
int main() {
    int mat1[SIZE][SIZE], mat2[SIZE][SIZE];
    int sumOriginal[SIZE][SIZE], trans1[SIZE][SIZE], trans2[SIZE][SIZE], sumTransposed[SIZE][SIZE];
    inputMatrix(mat1, "first");
    inputMatrix(mat2, "second");
    addMatrices(mat1, mat2, sumOriginal);
    printMatrix(sumOriginal, "Sum of original matrices");
    transposeMatrix(mat1, trans1);
    transposeMatrix(mat2, trans2);
    printMatrix(trans1, "Transpose of first matrix");
    printMatrix(trans2, "Transpose of second matrix");
    addMatrices(trans1, trans2, sumTransposed);
    printMatrix(sumTransposed, "Sum of transposed matrices");
    return 0;
}
