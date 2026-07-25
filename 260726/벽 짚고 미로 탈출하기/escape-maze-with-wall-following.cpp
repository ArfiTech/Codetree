#include <iostream>
#include <vector>

using namespace std;

int n, x, y;
vector<vector<char>> maze;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool inRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

bool isWall(int x, int y) {
    return inRange(x, y) && maze[x][y] == '#';
}

int main() {
    cin >> n;
    cin >> x >> y;

    maze.assign(n, vector<char>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> maze[i][j];
        }
    }

    x--;
    y--;

    vector<vector<vector<bool>>> visited(n, vector<vector<bool>>(n, vector<bool>(4, false)));

    int dir = 1;
    int t = 0;

    while (true) {
        if (visited[x][y][dir]) {
            cout << -1 << '\n';
            return 0;
        }

        visited[x][y][dir] = true;

        int frontX = x + dx[dir];
        int frontY = y + dy[dir];

        if (isWall(frontX, frontY)) {
            dir = (dir + 3) % 4;
            continue;
        }

        x = frontX;
        y = frontY;
        t++;

        if (!inRange(x, y)) {
            cout << t << '\n';
            return 0;
        }

        int rightDir = (dir + 1) % 4;
        int rightX = x + dx[rightDir];
        int rightY = y + dy[rightDir];

        if (!isWall(rightX, rightY)) {
            dir = rightDir;

            x += dx[dir];
            y += dy[dir];
            t++;

            if (!inRange(x, y)) {
                cout << t << '\n';
                return 0;
            }
        }
    }

    return 0;
}