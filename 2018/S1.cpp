#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.setf(ios::fixed);
	cout.precision(1);
	
	int n;
	cin >> n;
	vector<double> pos;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		x += 1e6;
		pos.push_back(x);
		
	}
	sort(pos.begin(), pos.end());
	vector<double> qs;
	for (int i = 1; i < n - 1; ++i) {
		qs.push_back((pos[i] - pos[i - 1]) / 2.0 + (pos[i + 1] - pos[i]) / 2.0);
	}
	sort(qs.begin(), qs.end());
	cout << qs[0] << endl;
	
	return 0;
}
