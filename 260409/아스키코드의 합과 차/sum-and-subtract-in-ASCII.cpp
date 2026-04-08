#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    // Please write your code here.
    char c1, c2;
    cin >> c1 >> c2;
    int c1_i = (int)c1, c2_i = (int)c2;
    cout << c1_i + c2_i << " " << abs(c1_i - c2_i);
    return 0;
}