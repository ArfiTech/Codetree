#include <iostream>
#include <vector>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    vector<int> bombs(n, 0);
    
    for (int i = 0; i < n; i++) {
        cin >> bombs[i];
    }

    // for (int i = 0; i < n; i++) {
    //     cout << bombs[i] << " ";
    // }

    if (m == 1) {
        cout << 0 << endl;
        return 0;
    }

    int cur_len = n;
    // int cur_pos = 0;
    bool trigger = true;
    while (trigger) {
        // cout << "cur_len: " << cur_len << endl;
        // cout << "cur_pos: " << cur_pos << endl;
        // cout << "trigger: " << trigger << endl;
        vector<bool> same_num(n, false);
        bool is_looped = false;
        for (int i = 0; i < cur_len-1; i++) {
            if (bombs[i+1] == bombs[i]) {
                // for (int i = 0; i < n; i++) {
                //     cout << bombs[i] << " ";
                // }
                int sn = 1;
                for (int j = i; j < cur_len-1; j++) {
                    if (bombs[j] == bombs[j+1])
                        sn++;
                    else
                        break;
                }
                // cout << "sn: " << sn << endl;
                if (sn >= m) {
                    // bombs.erase(bombs.begin()+i, bombs.begin()+i+same_num);
                    // same_num[i] = sn;
                    for (int j = i; j < i + sn; j++)
                        same_num[j] = true;
                    // cur_len = bombs.size();
                    // cur_pos = i;
                    is_looped = true;
                    // for (int i = 0; i < n; i++) {
                    //     cout << bombs[i] << " ";
                    // }
                    // cout << endl;
                }
            }
        }

        if (!is_looped) trigger = false;
        else {
            vector<int> temp;
            for (int i = 0; i < cur_len; i++) {
                if (same_num[i]) continue;
                temp.push_back(bombs[i]);
            }
            bombs = temp;
            cur_len = bombs.size();
        }
    }

    if (bombs.size() == 0) {
        cout << 0 << endl;
    }
    else {
        cout << bombs.size() << endl;
        for (int i = 0; i < bombs.size(); i++) {
            cout << bombs[i] << endl;
        }
    }

    return 0;
}