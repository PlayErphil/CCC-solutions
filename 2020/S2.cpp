#include <bits/stdc++.h>

using namespace std;
const int MM = 1e6 + 7;

vector<int> adj[MM];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            int x;
            cin >> x;
            adj[i * j].push_back(x);
        }
    }
    vector<bool> vis(MM, false);
    deque<int> q;
    q.push_back(1);
    vis[1] = true;
    while (!q.empty()) {
        int curr = q.front();
        q.pop_front();
        for (auto item : adj[curr]) {
            if (!vis[item]) {
                vis[item] = true;
                q.push_back(item);
            }
        }
    }
    if (vis[n * m])
        cout << "yes\n";
    else
        cout << "no\n";

    return 0;
}