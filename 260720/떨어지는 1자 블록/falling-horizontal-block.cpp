#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m, k;
// int grid[100][100];

int main() {
    cin >> n >> m >> k;
    
    vector<vector<int>> grid(n, vector<int> (n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int min_dist = 101;
    for (int i = k-1; i < k+m-1; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n-1 || grid[j+1][i] == 1) {
                // cout << "cur j: " << j << ", cur i: " << i << endl;
                min_dist = min(min_dist, j);
                break;
            }
        }
    }
    // cout << "min: " << min_dist << endl;

    for (int i = k-1; i < k+m-1; i++)
        grid[min_dist][i] = 1;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
