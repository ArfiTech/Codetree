#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    int max_value = 0;
    unordered_map<string, int> cnt;

    cin >> n;
    for (int i = 0; i < n; i++) {
        string k;
        cin >> k;
        if (cnt.find(k) == cnt.end())
            cnt[k] = 1;
        else
            cnt[k] += 1;
        if (max_value < cnt[k])
            max_value = cnt[k];
    }
    cout << max_value;
    
    return 0;
}