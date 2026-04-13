#include <iostream>
#include <string>

using namespace std;

int main() {
    // Please write your code here.
    string inp;
    cin >> inp;

    if (inp.find("ee") != string::npos)
        cout << "Yes" << " ";
    else
        cout << "No" << " ";
    if (inp.find("ab") != string::npos)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}