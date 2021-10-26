#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<pair<int, int>> pairs;
		for (int i = 1; i * i <= n; ++i) {
			if (n % i == 0) {
				pairs.push_back({abs(i - n / i), i + n / i});
			}
		}
		bool nasty = false;
		for (int i = 0; i < pairs.size() && !nasty; ++i) {
			for (int j = i + 1; j < pairs.size() && !nasty; ++j) {
				if (pairs[i].first == pairs[j].second || pairs[i].second == pairs[j].first) nasty = true;
			}
		}
		cout << n;
		if (nasty) cout << " is nasty\n";
		else cout << " is not nasty\n";
	}
	
	return 0;
}