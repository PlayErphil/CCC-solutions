#include <bits/stdc++.h>

using namespace std;

bool fun(pair<int, string> comp1, pair<int, string> comp2) {
	if (comp1.first == comp2.first)
		return comp1.second < comp2.second;
	else return comp1 > comp2;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<pair<int, string>> computers;
	for (int i = 0; i < n; ++i) {
		int r, s, d;
		string c;
		cin >> c >> r >> s >> d;
		computers.emplace_back(2 * r + 3 * s + d, c);
	}
	sort(computers.begin(), computers.end(), fun);
	if (computers.size() != 0)cout << computers[0].second << endl;
	if (computers.size() > 1) {
		cout << computers[1].second << endl;
	}
	
	return 0;
}