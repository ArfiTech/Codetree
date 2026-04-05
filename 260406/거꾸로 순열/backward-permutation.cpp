#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> visited;
vector<int> arr;

void dfs(int curr_num) {
    if (curr_num == n+1) {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
        return;
    }

    for (int i = n-1; i >= 0; i--) {
        if (visited[i])
            continue;
        visited[i] = true;
        arr.push_back(i+1);
        dfs(curr_num+1);
        visited[i] = false;
        arr.pop_back();
    }
}

int main() {
    cin >> n;
    visited.assign(n, false);
    dfs(1);
    return 0;
}
