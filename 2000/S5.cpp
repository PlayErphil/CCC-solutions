#include <bits/stdc++.h>

using namespace std;
const double eps = 1e-6;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.setf(ios::fixed);
	cout.precision(2);
	
	
	int n;
	cin >> n;
	vector<pair<double, double>> sheep;
	for (int i = 0; i < n; ++i) {
		double x, y;
		cin >> x >> y;
		sheep.push_back({x, y});
	}
	set<pair<double, double>> finalAns;
	deque<pair<double, double>> ans;
	for (double i = 0; i <= 1000.0; i += 0.01) {
		double lastDis = 1e8;
		for (auto item: sheep) {
			double dis = (item.first - i) * (item.first - i) + item.second * item.second;
			if (abs(dis - lastDis) < eps) {
				ans.push_back(item);
			} else if (dis < lastDis) {
				ans.clear();
				ans.push_back(item);
				lastDis = dis;
			}
		}
		for (auto item: ans) {
			finalAns.insert(item);
		}
	}
	for (auto item: finalAns) {
		cout << "The sheep at (" << item.first << ", " << item.second << ") might be eaten.\n";
	}
	
	
	return 0;
}