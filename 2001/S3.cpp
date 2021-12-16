#include <bits/stdc++.h>

using namespace std;
vector<int> adj[27];
int target1, target2;

void dfs(int node, vector<bool> &vis) {
    vis[node] = true;
    for (auto item : adj[node]) {
        if (node == target1 && item == target2) continue;
        if (node == target2 && item == target1) continue;
        if (!vis[item]) {
            dfs(item, vis);
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<string> pairs;

    while (s != "**") {
        pairs.push_back(s);
        adj[s[0] - 'A'].push_back(s[1] - 'A');
        adj[s[1] - 'A'].push_back(s[0] - 'A');
        cin >> s;
    }
    int cnt = 0;
    for (auto pair : pairs) {
        target1 = pair[0] - 'A';
        target2 = pair[1] - 'A';
        vector<bool> vis(27, false);
        dfs(0, vis);
        if (!vis[1]) {
            cnt++;
            cout << pair << "\n";
        }
    }
    cout << "There are " << cnt << " disconnecting roads.\n";

    return 0;
}