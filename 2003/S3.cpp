#include <bits/stdc++.h>

using namespace std;
vector<bool> vis(650, false);
vector<int> adj[650];
int cnt = 0;

void dfs(int node) {
	vis[node] = true;
	cnt++;
	for (auto item: adj[node]) {
		if (!vis[item]) {
			dfs(item);
		}
	}
}


int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, r, c;
	cin >> n >> r >> c;
	vector<bool> tmp(c + 2, false);
	vector<vector<bool>> grid(r + 2, tmp);
	for (int i = 1; i <= r; ++i) {
		for (int j = 1; j <= c; ++j) {
			char x;
			cin >> x;
			if (x == '.') grid[i][j] = true;
			else vis[(i - 1) * c + j] = true;
		}
	}
	
	for (int i = 1; i <= r; ++i) {
		for (int j = 1; j <= c; ++j) {
			if (!grid[i][j]) continue;
			vector<int> nodes;
			nodes.push_back((i - 1) * c + j);
			if (grid[i + 1][j]) nodes.push_back((i) * c + j);
			if (grid[i - 1][j]) nodes.push_back((i - 2) * c + j);
			if (grid[i][j + 1]) nodes.push_back((i - 1) * c + j + 1);
			if (grid[i][j - 1]) nodes.push_back((i - 1) * c + j - 1);
			for (int k = 1; k < nodes.size(); ++k) {
				adj[nodes[0]].push_back(nodes[k]);
				adj[nodes[k]].push_back(nodes[0]);
			}
		}
	}
	vector<int> ans;
	for (int i = 1; i <= r * c; ++i) {
		if (!vis[i]) {
			dfs(i);
			ans.push_back(cnt);
			cnt = 0;
		}
	}
	sort(ans.begin(), ans.end());
	int rooms = 0;
	
	for (int i = ans.size() - 1; i >= 0; --i) {
		if (n - ans[i] >= 0) {
			rooms++;
			n -= ans[i];
		} else break;
	}
	
	if (rooms == 1) cout << rooms << " room, " << n << " square metre(s) left over\n";
	else cout << rooms << " rooms, " << n << " square metre(s) left over\n";
	
	return 0;
}
