#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

int n;

int main() {
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++) {
        string fruit;
        cin >> fruit;
        m[fruit]++;
    }

    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        // cout << (it -> second) << "\n";
        float per = ((float)(it -> second) / n) * 100;
        cout << (it -> first) << " " << fixed << setprecision(4) << per << "\n";
    }

    return 0;
}
