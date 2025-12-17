#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> grid;

// Rotate a matrix 90 degrees clockwise
vector<vector<char>> rotate90(const vector<vector<char>> &mat) {
    int n = mat.size();
    vector<vector<char>> res(n, vector<char>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            res[j][n - 1 - i] = mat[i][j];
    return res;
}

// BFS to compute shortest path from S to D
int bfs(vector<string> &finalGrid) {
    int n = finalGrid.size();
    vector<vector<int>> dist(n, vector<int>(n, -1));
    queue<pair<int, int>> q;
    pair<int, int> start, dest;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (finalGrid[i][j] == 'S') start = make_pair(i, j);
            if (finalGrid[i][j] == 'D') dest = make_pair(i, j);
        }
    }

    q.push(start);
    dist[start.first][start.second] = 1;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();
        int x = curr.first;
        int y = curr.second;

        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if (nx >= 0 && ny >= 0 && nx < n && ny < n) {
                if (finalGrid[nx][ny] != 'L' && dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }

    return dist[dest.first][dest.second];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    grid.resize(N);
    for (int i = 0; i < N; i++) cin >> grid[i];

    int numSheets = N / M;
    vector<vector<vector<vector<char>>>> sheetBlocks(numSheets, vector<vector<vector<char>>>(numSheets));

    pair<int, int> sSheet, dSheet;

    for (int sr = 0; sr < numSheets; sr++) {
        for (int sc = 0; sc < numSheets; sc++) {
            vector<vector<char>> block(M, vector<char>(M));
            for (int i = 0; i < M; i++) {
                for (int j = 0; j < M; j++) {
                    block[i][j] = grid[sr * M + i][sc * M + j];
                    if (block[i][j] == 'S') sSheet = make_pair(sr, sc);
                    if (block[i][j] == 'D') dSheet = make_pair(sr, sc);
                }
            }
            sheetBlocks[sr][sc] = block;
        }
    }

    // Reconstruct final grid (no rearrangement logic yet)
    vector<string> finalGrid(N, string(N, 'L'));
    for (int sr = 0; sr < numSheets; sr++) {
        for (int sc = 0; sc < numSheets; sc++) {
            vector<vector<char>> block = sheetBlocks[sr][sc];
            for (int i = 0; i < M; i++) {
                for (int j = 0; j < M; j++) {
                    finalGrid[sr * M + i][sc * M + j] = block[i][j];
                }
            }
        }
    }

    cout << bfs(finalGrid) << "\n";
    return 0;
}
