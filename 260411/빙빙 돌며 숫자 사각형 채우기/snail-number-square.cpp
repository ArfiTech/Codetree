#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int n, m;
vector<vector<int>> board;

bool inRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
    // Please write your code here.
    cin >> n >> m;
    // int board[n][m];
    int cur_x = 0, cur_y = 0;
    // int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int dir_num = 0;
    // memset(board, 0, sizeof(board));
    board.assign(n, vector<int>(m, 0));
    board[cur_x][cur_y] = 1;
    for (int i = 2; i <= m*n; i++) {
        int new_x = cur_x + dx[dir_num], new_y = cur_y + dy[dir_num];
        if (!inRange(new_x, new_y) || board[new_x][new_y] > 0)
            dir_num = (dir_num + 1) % 4;
        cur_x += dx[dir_num];
        cur_y += dy[dir_num];
        board[cur_x][cur_y] = i;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}