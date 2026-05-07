#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<vector<int>> belt(3, vector<int>(n, 0));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < n; j++)
            cin >> belt[i][j];

    // for (vector<int> row : belt) {
    //     for (int x : row)
    //         cout << x << " ";
    //     cout << endl;
    // }
    // cout << endl;

    for (int i = 0; i < t; i++) {
        int temp1 = belt[0][n-1];
        int temp2 = belt[1][n-1];
        int temp3 = belt[2][n-1];
        for (int j = n-1; j > 0; j--) {
            belt[0][j] = belt[0][j-1];
            belt[1][j] = belt[1][j-1];
            belt[2][j] = belt[2][j-1];
        }
        belt[0][0] = temp3;
        belt[1][0] = temp1;
        belt[2][0] = temp2;
    }

    for (vector<int> row : belt) {
        for (int x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}