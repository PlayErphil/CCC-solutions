#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    /** My Solution **/

    int t;
    cin >> t;
    while (t--) {
        int r, c;
        cin >> r >> c;
        char grid[r + 1][c + 1];
        for (int i = 1; i <= r; ++i) {
            for (int j = 1; j <= c; ++j) {
                cin >> grid[i][j];
            }
        }
        vector<int> adj[500];
        for (int i = 1; i <= r; ++i) {
            for (int j = 1; j <= c; ++j) {
                if (grid[i][j] == '+') {
                    // go north
                    if (i - 1 != 0) {
                        if (grid[i - 1][j] != '*') {
                            adj[(i - 1) * c + j].push_back((i - 2) * c + j);
                        }
                    }
                    // go west
                    if (j - 1 != 0) {
                        if (grid[i][j - 1] != '*') {
                            adj[(i - 1) * c + j].push_back((i - 1) * c + j - 1);
                        }
                    }
                    // south
                    if (i + 1 <= r) {
                        if (grid[i + 1][j] != '*') {
                            adj[(i - 1) * c + j].push_back((i)*c + j);
                        }
                    }
                    // east
                    if (j + 1 <= c) {
                        if (grid[i][j + 1] != '*') {
                            adj[(i - 1) * c + j].push_back((i - 1) * c + j + 1);
                        }
                    }

                } else if (grid[i][j] == '-') {
                    // east
                    if (j + 1 <= c) {
                        if (grid[i][j + 1] != '*') {
                            adj[(i - 1) * c + j].push_back((i - 1) * c + j + 1);
                        }
                    }
                    // go west
                    if (j - 1 != 0) {
                        if (grid[i][j - 1] != '*') {
                            adj[(i - 1) * c + j].push_back((i - 1) * c + j - 1);
                        }
                    }
                } else if (grid[i][j] == '|') {
                    // go north
                    if (i - 1 != 0) {
                        if (grid[i - 1][j] != '*') {
                            adj[(i - 1) * c + j].push_back((i - 2) * c + j);
                        }
                    }
                    // south
                    if (i + 1 <= r) {
                        if (grid[i + 1][j] != '*') {
                            adj[(i - 1) * c + j].push_back((i)*c + j);
                        }
                    }
                }
            }
        }
        deque<int> q;
        vector<bool> vis(500, false);
        int dis[500];
        vis[1] = true;
        dis[1] = 1;
        q.push_back(1);
        while (!q.empty()) {
            int current = q.front();
            q.pop_front();
            for (auto item : adj[current]) {
                if (!vis[item]) {
                    vis[item] = true;
                    dis[item] = dis[current] + 1;
                    q.push_back(item);
                }
            }
        }
        if (vis[c * r]) {
            cout << dis[c * r] << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}