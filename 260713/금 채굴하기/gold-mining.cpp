#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int n, m;

bool inRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n; 
}

// (cx, cy)를 중심으로 크기가 k인 마름모 안의 금 개수 반환
int countGold(int cx, int cy, int k, const vector<vector<int>>& board) {
    int goldCnt = 0;

    // dx: 중심으로부터 위 아래로 k칸까지 확인 가능
    for (int dx = -k; dx <= k; dx++) {
        int maxDy = k - abs(dx); // 세로 위치에 따른 가로 위치 확인 가능 범위

        for (int dy = -maxDy; dy <= maxDy; dy++) {
            int nx = cx + dx;
            int ny = cy + dy;

            if (inRange(nx, ny)) {
                goldCnt += board[nx][ny];
            }
        }
    }
    return goldCnt;
}

int main() {
    cin >> n >> m;

    vector<vector<int>> board(n, (vector<int>(n)));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];

    int answer = 0;
    int maxK = 2 * (n - 1); // k가 해당 숫자면 모든 칸 덮음. 더 크면 가격은 그대로 cost만 늘어남

    // 모든 칸을 마름모의 중심으로 선택
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            for (int k = 0; k <= maxK; k++) {
                int goldCnt = countGold(i, j, k, board);
                int cost = k * k + (k + 1) * (k + 1);
                int result = goldCnt * m;

                if (result >= cost) {
                    answer = max(answer, goldCnt);
                }
            }
        }
    }
    
    cout << answer;

    return 0;
}