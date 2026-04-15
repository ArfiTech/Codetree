#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c = a + b;
    string c_s = to_string(c);
    int cnt = 0;
    for (char x : c_s) {
        if (x == '1') cnt++;
    }
    
    cout << cnt;
    return 0;
}