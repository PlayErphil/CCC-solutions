#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<pair<double, double>> arr;
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		arr.push_back({x, y});
	}
	sort(arr.begin(), arr.end());
	double ans = 0;
	for (int i = 1; i <= n; ++i) {
		ans = max(ans, abs(arr[i].second - arr[i - 1].second) / abs(arr[i].first - arr[i - 1].first));
	}
	cout << ans << endl;
	
	
	return 0;
}
