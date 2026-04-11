#include <iostream>
using namespace std;

int n;
int answer = 0;

void DFS(int cur_len) {
    if (cur_len >= n) {
        if (cur_len == n)
            answer++;
        return;
    }
    for (int i = 1; i <= 4; i++) {
        if (i == 1) {
            DFS(cur_len + 1);
        } else if (i == 2) {
            DFS(cur_len + 2);
        } else if (i == 3) {
            DFS(cur_len + 3);
        } else {
            DFS(cur_len + 4);
        }
    }
}

int main() {
    // Please write your code here.
    cin >> n;
    // for (int i = 1; i <= 4; i++) {
    //     DFS(i);
    // }
    DFS(0);
    cout << answer << endl;
    return 0;
}