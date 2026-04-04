#include <iostream>

using namespace std;

int n;
int r, c;
int a[100][100];
int visited[100][100];

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    cin >> n >> r >> c;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Please write your code here.
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    int cur_x = r-1;
    int cur_y = c-1;
    cout << a[cur_x][cur_y];
    while (true) {
        int next_x = -1, next_y = -1;
        for (int i = 0; i < 4; i++) {
            int new_x = cur_x + dx[i];
            int new_y = cur_y + dy[i];
            if (InRange(new_x, new_y) && a[cur_x][cur_y] < a[new_x][new_y]) {
                next_x = new_x;
                next_y = new_y;
                break;
            }
        }
        if (next_x == -1 && next_y == -1)
            break;
        else {
            cur_x = next_x;
            cur_y = next_y;
            cout << ' ' << a[cur_x][cur_y];
        }
    }

    return 0;
}
