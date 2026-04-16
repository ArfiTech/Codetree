#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    s = s.erase(1, 1);
    reverse(s.begin(), s.end());
    s = s.erase(1, 1);
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}