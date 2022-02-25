#include <bits/stdc++.h>

using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define log(x, y) log(y) / log(x)
const double PI = acos(-1);
// const int MAXN = 1e9 + 7;

set<int> tmp;
vector<set<int>> adj(1000, tmp);

void add(int x, int y) {
    adj[x].insert(y);
    adj[y].insert(x);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    /** My Solution **/

    add(2, 6);
    add(1, 6);
    add(3, 6);
    add(4, 6);
    add(5, 6);
    add(7, 6);
    add(3, 4);
    add(4, 5);
    add(3, 5);
    add(7, 8);
    add(9, 8);
    add(9, 10);
    add(11, 10);
    add(11, 12);
    add(12, 9);
    add(12, 13);
    add(14, 13);
    add(15, 13);
    add(15, 3);
    add(16, 17);
    add(17, 18);
    add(18, 16);

    char entry;
    cin >> entry;
    int x, y;
    while (entry != 'q') {
        // add a friendship
        if (entry == 'i') {
            cin >> x >> y;
            add(x, y);
        }
        // erase a friendship
        else if (entry == 'd') {
            cin >> x >> y;

            adj[x].erase(y);

            adj[y].erase(x);
        }

        // output the number of friends
        else if (entry == 'n') {
            cin >> x;
            cout << sz(adj[x]) << endl;
        }
        // output the friend of friends
        else if (entry == 'f') {
            cin >> x;
            int ans = 0;
            deque<int> q;
            vector<bool> vis(52, false);
            vector<int> dist(52, 0);
            q.push_back(x);
            vis[x] = true;
            while (!q.empty()) {
                int current = q.front();
                q.pop_front();
                for (auto item : adj[current]) {
                    if (!vis[item]) {
                        vis[item] = true;
                        dist[item] = dist[current] + 1;
                        q.push_back(item);
                        if (dist[item] == 2) {
                            ans++;
                        }
                    }
                }
            }
            cout << ans << endl;

        } else if (entry == 's') {
            cin >> x >> y;
            deque<int> q;
            vector<bool> vis(1000, false);
            vector<int> dist(1000, 0);
            q.push_back(x);
            vis[x] = true;
            while (!q.empty()) {
                int current = q.front();
                q.pop_front();
                for (auto item : adj[current]) {
                    if (!vis[item]) {
                        vis[item] = true;
                        dist[item] = dist[current] + 1;
                        q.push_back(item);
                    }
                }
            }
            if (vis[y]) {
                cout << dist[y] << endl;
            } else {
                cout << "Not connected" << endl;
            }
        }
        cin >> entry;
    }

    return 0;
}