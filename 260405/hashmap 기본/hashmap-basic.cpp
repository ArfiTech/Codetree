#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int n;

int main() {
    cin >> n;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        if (command == "add") {
            int k, v;
            cin >> k >> v;
            m[k] = v;
        }
        else if (command == "find") {
            int k;
            cin >> k;
            if (m[k] == 0)
                cout << "None" << "\n";
            else
                cout << m[k] << "\n";
        }
        else {
            int k;
            cin >> k;
            m.erase(k);
        }
    }
    return 0;
}
