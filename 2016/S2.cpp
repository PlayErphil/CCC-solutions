#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int q, n;
	cin >> q >> n;
	vector<int> a, b;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		a.push_back(x);
	}
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		b.push_back(x);
	}
	sort(a.begin(), a.end());
	int ans = 0;
	
	if (q == 1) sort(b.begin(), b.end());
	else sort(b.rbegin(), b.rend());
	
	for (int i = 0; i < n; ++i) {
		ans += max(a[i], b[i]);
	}
	cout << ans << endl;
	
	return 0;
}