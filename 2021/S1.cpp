#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	/** My Solution **/
	
	cout.setf(ios::fixed);
	cout.precision(25);
	
	int n;
	cin >> n;
	double h[n + 1], w[n];
	for (int i = 0; i <= n; ++i) {
		cin >> h[i];
	}
	double ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> w[i];
		ans += (h[i] + h[i + 1]) * w[i] / 2;
	}
	cout << ans;
	
	return 0;
}