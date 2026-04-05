#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, m;
    unordered_map<int, int> cnt;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int elem;
        cin >> elem;
        if (cnt[elem] == 0)
            cnt[elem] = 1;
        else
            cnt[elem] += 1;
    }
    for (int i = 0; i < m; i++) {
        int f;
        cin >> f;
        cout << cnt[f] << " ";
    }
    return 0;
}