#include <iostream>

using namespace std;

// Function to display a matrix
void displayMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows for the first matrix: ";
    cin >> rows;
    cout << "Enter the number of columns for the first matrix: ";
    cin >> cols;
    int matrix1[100][100];
    int matrix2[100][100];
    int result[100][100];
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the number of rows for the second matrix: ";
    int secondRows;
    cin >> secondRows;
    cout << "Enter the number of columns for the second matrix: ";
    int secondCols;
    cin >> secondCols;
    if (cols != secondRows) {
        cout << "Error: Matrix multiplication is not possible due to incompatible dimensions." << endl;
        return 1;
    }
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < secondRows; ++i) {
        for (int j = 0; j < secondCols; ++j) {
            cin >> matrix2[i][j];
        }
    }
    char operation;
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;
    switch (operation) {
        case '+':
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                }
            }
            cout << "Matrix Addition Result:" << endl;
            displayMatrix(result, rows, cols);
            break;
        case '-':
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    result[i][j] = matrix1[i][j] - matrix2[i][j];
                }
            }
            cout << "Matrix Subtraction Result:" << endl;
            displayMatrix(result, rows, cols);
            break;
        case '*':
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < secondCols; ++j) {
                    result[i][j] = 0;
                    for (int k = 0; k < cols; ++k) {
                        result[i][j] += matrix1[i][k] * matrix2[k][j];
                    }
                }
            }
            cout << "Matrix Multiplication Result:" << endl;
            displayMatrix(result, rows, secondCols);
            break;
            
        case '/':
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    if (matrix2[i][j] != 0) {
                        result[i][j] = matrix1[i][j] / matrix2[i][j];
                    } else {
                        cout << "Error: Division by zero is not allowed." << endl;
                        return 1;
                    }
                }
            }
            cout << "Matrix Division Result:" << endl;
            displayMatrix(result, rows, cols);
            break;
            
        default:
            cout << "Error: Invalid operation selected." << endl;
            return 1;
    }
    
    return 0;
}

