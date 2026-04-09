#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Please write your code here.
    int inp[5];
    memset(inp, 0, sizeof(inp));
    for (int i = 0; i < 5; i++)
        cin >> inp[i];
    
    for (int i = 0; i < 5; i++) {
        cout << (char)inp[i] << " ";
    }
    return 0;
}