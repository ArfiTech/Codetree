#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int n, m;

bool inRange(pair<int, int> pos) {
    int x = pos.first;
    int y = pos.second;
    return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
    cin >> n >> m;
    vector<vector<int>> board(n, (vector<int>(m)));
    for (int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> board[i][j];
    
    vector<vector<int>> shape_x = {
        {0, 1, 1},
        {0, 1, 0},
        {0, 0, 1},
        {1, 1, 0},
        {0, 0, 0},
        {0, 1, 2}
    };
    vector<vector<int>> shape_y = {
        {0, 0, 1},
        {0, 0, 1},
        {0, 1, 1},
        {0, 1, 1},
        {0, 1, 2},
        {0, 0, 0}
    };
    // vector<vector<int>> shape_x(6, (vector<int>, 3));
    // vector<vector<int>> shape_y(6, (vector<int>, 3));

    int max_num = 0;
    for (int i =  0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < 6; k++) {
                pair<int, int> block1 = {i + shape_x[k][0], j + shape_y[k][0]};
                pair<int, int> block2 = {i + shape_x[k][1], j + shape_y[k][1]};
                pair<int, int> block3 = {i + shape_x[k][2], j + shape_y[k][2]};

                if (!inRange(block1)) continue;
                if (!inRange(block2)) continue;
                if (!inRange(block3)) continue;

                int cur_num = board[block1.first][block1.second] + board[block2.first][block2.second] + board[block3.first][block3.second];
                max_num = max(max_num, cur_num);
            }
        }
    }

    cout << max_num << endl;
    return 0;
}