#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> board(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int t;
            cin >> t;
            board[i][j] = t;
        }
    }

    // for (vector<int> row : board) {
    //     for (int col : row) {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    int cur_num = 0;
    vector<int> cnt(2*n, 1); 
    for (int i = 0; i < n; i++) {
        int max_cnt = 1;
        for (int j = 0; j < n; j++) {
            if (board[i][j] == cur_num) {
                cnt[i]++;
                max_cnt = max(cnt[i], max_cnt);
            }
            else {
                cnt[i] = 1;
            }
            cur_num = board[i][j];
        }
        cur_num = 0;
        cnt[i] = max_cnt;
    }

    // for (int x : cnt) {
    //     cout << x << " ";
    // }
    // cout << endl;

    for (int j = 0; j < n; j++) {
        int max_cnt = 1;
        for (int i = 0; i < n; i++) {
            if (board[i][j] == cur_num) {
                cnt[j+n]++;
                max_cnt = max(cnt[j+n], max_cnt);
            }
            else {
                cnt[j+n] = 1;
            }
            cur_num = board[i][j];
        }
        cur_num = 0;
        cnt[j+n] = max_cnt;
    }

    // for (int x : cnt) {
    //     cout << x << " ";
    // }
    // cout << endl;

    int ans = 0;
    for (int i = 0; i < 2*n; i++) {
        if (cnt[i] >= m) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}