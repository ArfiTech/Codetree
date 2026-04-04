#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int val;
    int arr[4][4];
    for (int i = 0; i < 4; i++) {
        int sum_val = 0;
        for (int j = 0; j < 4; j++) {
            cin >> val;
            sum_val += val;
        }
        cout << sum_val << "\n";
    }
    return 0;
}