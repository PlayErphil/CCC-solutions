#include <bits/stdc++.h>

using namespace std;

vector<int> adj[101];
map<string, int> ids;
const string startL = "<A HREF=\"";

bool dfs(int node, vector<bool> &vis, int target) {
    if (node == target) return true;
    vis[node] = true;
    for (auto item : adj[node]) {
        if (!vis[item]) {
            if (dfs(item, vis, target)) return true;
        }
    }
    return false;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    getline(cin, s);
    int tmp = 0;
    while (n--) {
        getline(cin, s);
        if (ids.find(s) == ids.end()) {
            ids[s] = tmp;
            tmp++;
        }
        string line;
        getline(cin, line);
        while (line != "</HTML>") {
            for (int i = 0; i + startL.size() < line.size(); ++i) {
                if (line.substr(i, startL.size()) == startL) {
                    string newLink;
                    i += startL.size();
                    while (line[i] != '"') {
                        newLink += line[i];
                        i++;
                    }
                    if (ids.find(newLink) == ids.end()) {
                        ids[newLink] = tmp;
                        tmp++;
                    }
                    adj[ids[s]].push_back(ids[newLink]);
                    cout << "Link from " << s << " to " << newLink << "\n";
                }
            }
            getline(cin, line);
        }
    }
    string a, b;
    getline(cin, a);
    while (a != "The End") {
        getline(cin, b);
        vector<bool> vis(102, false);
        cout << ((dfs(ids[a], vis, ids[b])) ? "Can" : "Can't") << " surf from " << a << " to " << b << ".\n";

        getline(cin, a);
    }

    return 0;
}