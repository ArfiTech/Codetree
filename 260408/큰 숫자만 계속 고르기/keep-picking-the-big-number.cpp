#include <iostream>
#include <queue>

using namespace std;

int n, m;
int arr[100000];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    priority_queue<int> q;
    for (int i = 0; i < n; i++) {
        q.push(arr[i]);
    }

    for (int i = 0; i < m; i++) {
        int cur = q.top();
        q.pop();
        q.push(--cur);
    }
    cout << q.top();
    return 0;
}
