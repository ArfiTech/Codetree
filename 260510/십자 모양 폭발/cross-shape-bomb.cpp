#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> board(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];
    
    int r, c;
    cin >> r >> c;

    int cur_r = r-1, cur_c = c-1;
    int cur_num = board[cur_r][cur_c];
    for (int i = cur_r-cur_num+1; i <= cur_r+cur_num-1; i++) {
        if (i < 0 || i > n-1) continue;
        board[i][cur_c] = 0;
    }
    for (int j = cur_c-cur_num+1; j <= cur_c+cur_num-1; j++) {
        if (j < 0 || j > n-1) continue;
        board[cur_r][j] = 0;
    }
    // for (vector<int> row : board) {
    //     for (int x : row) {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "------" << endl;

    vector<vector<int>> new_board(n, vector<int>(n));
    for (int j = 0; j < n; j++) {
        int cur_row = n-1;
        for (int i = n-1; i >= 0; i--) {
            if (board[i][j] != 0) {
                new_board[cur_row][j] = board[i][j];
                cur_row--;
            }
        }
    }
    board = new_board;

    for (vector<int> row : board) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}