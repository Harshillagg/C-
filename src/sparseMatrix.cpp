#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main() {
    int rows = 3, cols = 3, count = 0;
    int rowIndices[MAX_SIZE], colIndices[MAX_SIZE], values[MAX_SIZE];

    int matrix[3][3] = {
        {0, 6, 0},
        {0, 5, 0},
        {3, 0, 2}
    };

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                rowIndices[count] = i;
                colIndices[count] = j;
                values[count] = matrix[i][j];
                count++;
            }
        }
    }

    cout << "Sparse Matrix:" << endl;
    for (int i = 0; i < count; i++) {
        cout << rowIndices[i] << "\t" << colIndices[i] << "\t" << values[i] << endl;
    }

    return 0;
}