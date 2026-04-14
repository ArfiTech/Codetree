#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int n1 = stoi(a+b);
    int n2 = stoi(b+a);

    cout << n1 + n2;
    return 0;
}