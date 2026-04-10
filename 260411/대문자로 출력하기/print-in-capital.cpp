#include <iostream>
#include <string>

using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    string ans = "";
    for (char x : s) {
        if (x >= 'a' && x <= 'z') {
            char up = (char)(x - 'a' + 'A');
            ans += up;
        }
        else if (x >= 'A' && x <= 'Z') {
            ans += x;
        }
    }
    cout << ans << endl;
    return 0;
}