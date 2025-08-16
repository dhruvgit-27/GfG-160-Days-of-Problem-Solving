#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<string>& board, int n) {
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q') return false;
        if (col - (row - i) >= 0 && board[i][col - (row - i)] == 'Q') return false;
        if (col + (row - i) < n && board[i][col + (row - i)] == 'Q') return false;
    }
    return true;
}

void solve(int row, vector<string>& board, vector<vector<string>>& res, int n) {
    if (row == n) {
        res.push_back(board);
        return;
    }
    for (int col = 0; col < n; col++) {
        if (isSafe(row, col, board, n)) {
            board[row][col] = 'Q';
            solve(row+1, board, res, n);
            board[row][col] = '.';
        }
    }
}

int main() {
    int n = 4;
    vector<vector<string>> res;
    vector<string> board(n, string(n, '.'));
    solve(0, board, res, n);
    for (auto& sol : res) {
        for (auto& row : sol) cout << row << endl;
        cout << endl;
    }
    return 0;
}
