#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int m, n, k;
	cin >> m >> n >> k;
	vector<int> rows(m + 1, 0);
	vector<int> cols(n + 1, 0);
	for (int i = 0; i < k; ++i) {
		char c;
		int x;
		cin >> c >> x;
		if (c == 'R') rows[x]++;
		else cols[x]++;
	}
	int cnt = 0;
	for (int i = 1; i <= m; ++i) {
		for (int j = 1; j <= n; ++j) {
			if ((rows[i] + cols[j]) % 2 != 0) cnt++;
		}
	}
	cout << cnt << endl;
	
	return 0;
}