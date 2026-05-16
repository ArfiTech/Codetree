#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<vector<int>> board;
vector<vector<bool>> visited;

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

bool CanGo(int x, int y) {
    if (!InRange(x, y)) return false;
    if (visited[x][y] || board[x][y] == 0) return false;
    return true;
}

int DFS(int x, int y, int cnt) {
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
    for (int i = 0; i < 4; i++) {
        int new_x = x + dx[i], new_y = y + dy[i];
        if (CanGo(new_x, new_y)) {
            visited[new_x][new_y] = true;
            cnt = DFS(new_x, new_y, ++cnt);
        }
    }
    return cnt;
}

int main() {
    cin >> n;
    board.assign(n, vector<int>(n, 0));
    visited.assign(n, vector<bool>(n, false));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];

    vector<int> villages;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 1 && visited[i][j] == false) {
                int cnt = 1;
                visited[i][j] = true;
                cnt = DFS(i, j, cnt);
                villages.push_back(cnt);
            }
        }
    }

    sort(villages.begin(), villages.end());
    int vill_size = villages.size();
    cout << vill_size << endl;
    for (int i = 0; i < vill_size; i++)
        cout << villages[i] << endl;
    return 0;
}