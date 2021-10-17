#include <bits/stdc++.h>

using namespace std;
#define nl "\n"
#define int long long
const int MM = 1e10 + 3, mod = 1e9 + 7;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, w, d;
    cin >> n >> w >> d;
    vector<int> adj[n + 1];
    for (int i = 0; i < w; ++i) {
        int a, b;
        cin >> a >> b;
        adj[b].push_back(a);
    }
    //bfs min dis from n to all nodes
    deque<int> q;
    vector<bool> vis(n + 1, false);
    q.push_back(n);
    vis[n] = true;
    vector<int> dis(n + 1, MM);
    dis[n] = 0;
    while (!q.empty()) {
        int cur = q.front();
        q.pop_front();
        for (auto item : adj[cur]) {
            if (!vis[item]) {
                q.push_back(item);
                dis[item] = dis[cur] + 1;
                vis[item] = true;
            }
        }
    }
    multiset<int> finalDis;
    int s[n + 1];
    for (int i = 1; i <= n; ++i) {
        cin >> s[i];
        finalDis.insert(dis[s[i]] + i);
    }
    while (d--) {
        int x, y;
        cin >> x >> y;
        finalDis.erase(finalDis.lower_bound(dis[s[x]] + x));
        finalDis.erase(finalDis.lower_bound(dis[s[y]] + y));
        swap(s[x], s[y]);
        finalDis.insert(dis[s[x]] + x);
        finalDis.insert(dis[s[y]] + y);
        cout << *finalDis.begin() - 1 << nl;
    }

    return 0;
}

