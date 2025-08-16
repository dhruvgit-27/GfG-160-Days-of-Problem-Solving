#include <bits/stdc++.h>
using namespace std;

bool isSafe(int grid[9][9], int row, int col, int num) {
    for (int x = 0; x < 9; x++) if (grid[row][x] == num || grid[x][col] == num) return false;
    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i+startRow][j+startCol] == num) return false;
    return true;
}

bool solveSudoku(int grid[9][9], int row, int col) {
    if (row == 9) return true;
    if (col == 9) return solveSudoku(grid, row+1, 0);
    if (grid[row][col] != 0) return solveSudoku(grid, row, col+1);
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;
            if (solveSudoku(grid, row, col+1)) return true;
            grid[row][col] = 0;
        }
    }
    return false;
}

int main() {
    int grid[9][9] = {0};
    solveSudoku(grid, 0, 0);
    // Problem: Solve the Sudoku
    return 0;
}
