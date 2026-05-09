#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<vector<int>> board(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> board[i][j];

    vector<pair<int, char>> wind;
    for (int i = 0; i < q; i++) {
        int r;
        char dir;
        cin >> r >> dir;
        wind.push_back({r, dir});
    }

    for (int i = 0; i < q; i++) {
        int row = wind[i].first - 1;
        int dir = wind[i].second;
        
        if (dir == 'L') {
            int temp = board[row][m-1];
            for (int j = m-1; j > 0; j--)
                board[row][j] = board[row][j-1];
            board[row][0] = temp;
        }
        else {
            int temp = board[row][0];
            for (int j = 0; j < m-1; j++)
                board[row][j] = board[row][j+1];
            board[row][m-1] = temp;
        }

        int cur_row = row;
        char cur_dir = dir;
        while (cur_row > 0) {
            cur_row = cur_row - 1;
            if (cur_dir == 'L')
                cur_dir = 'R';
            else
                cur_dir = 'L';
            int wave_up = false;
            for (int j = 0; j < m; j++) {
                if (board[cur_row][j] == board[cur_row + 1][j]) {
                    wave_up = true;
                    break;
                }
            }
            if (!wave_up) break;

            if (cur_dir == 'L') {
                int temp = board[cur_row][m-1];
                for (int j = m-1; j > 0; j--)
                    board[cur_row][j] = board[cur_row][j-1];
                board[cur_row][0] = temp;
            }
            else {
                int temp = board[cur_row][0];
                for (int j = 0; j < m-1; j++)
                    board[cur_row][j] = board[cur_row][j+1];
                board[cur_row][m-1] = temp;
            }
        }

        cur_row = row;
        cur_dir = dir;
        while (cur_row < n-1) {
            cur_row = cur_row + 1;
            if (cur_dir == 'L')
                cur_dir = 'R';
            else
                cur_dir = 'L';
            int wave_down = false;
            for (int j = 0; j < m; j++) {
                if (board[cur_row][j] == board[cur_row - 1][j]) {
                    wave_down = true;
                    break;
                }
            }
            if (!wave_down) break;

            if (cur_dir == 'L') {
                int temp = board[cur_row][m-1];
                for (int j = m-1; j > 0; j--)
                    board[cur_row][j] = board[cur_row][j-1];
                board[cur_row][0] = temp;
            }
            else {
                int temp = board[cur_row][0];
                for (int j = 0; j < m-1; j++)
                    board[cur_row][j] = board[cur_row][j+1];
                board[cur_row][m-1] = temp;
            }
        }
    }

    for (vector<int> row : board) {
        for (int x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}