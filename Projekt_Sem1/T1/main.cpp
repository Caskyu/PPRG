#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void generateMatrix(vector<vector<int>>& matrix) {
    for (auto& row : matrix)
        for (auto& cell : row)
            cell = rand() % 10 + 1;
}

void findMinPath(const vector<vector<int>>& matrix) {
    int rows = matrix.size(), cols = matrix[0].size();
    vector<vector<int>> A = matrix;

    for (int j = 1; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            A[i][j] += A[i][j - 1];
            if (i > 0) A[i][j] = min(A[i][j], matrix[i][j] + A[i - 1][j - 1]);
            if (i < rows - 1) A[i][j] = min(A[i][j], matrix[i][j] + A[i + 1][j - 1]);
        }
    }

    int minRow = 0;
    for (int i = 1; i < rows; i++)
        if (A[i][cols - 1] < A[minRow][cols - 1])
            minRow = i;

    cout << "Najlepsza sciezka wiedzie przez pola o wartosci: ";
    for (int j = cols - 1, i = minRow; j >= 0; j--) {
        cout << matrix[i][j] << " ";
        if (j > 0) {
            if (i > 0 && A[i][j] == matrix[i][j] + A[i - 1][j - 1]) i--;
            else if (i < rows - 1 && A[i][j] == matrix[i][j] + A[i + 1][j - 1]) i++;
        }
    }
    cout << "\nSuma pol: " << A[minRow][cols - 1] << endl;
}

int main() {
    int rows, cols;
    cout << "Podaj liczbe wierszy: "; cin >> rows;
    cout << "Podaj liczbe kolumn: "; cin >> cols;

    vector matrix(rows, vector<int>(cols));
    generateMatrix(matrix);

    cout << "Tablica:\n";
    for (const auto& row : matrix) {
        for (int cell : row) cout << cell << " ";
        cout << endl;
    }

    findMinPath(matrix);
    return 0;
}


