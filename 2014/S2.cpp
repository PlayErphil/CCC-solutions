#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	map<string, string> partner;
	int n;
	cin >> n;
	vector<string> names;
	for (int i = 0; i < n; ++i) {
		string tmp;
		cin >> tmp;
		names.push_back(tmp);
	}
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		partner[s] = names[i];
	}
	for (int i = 0; i < n; ++i) {
		string friend1 = partner[names[i]];
		if (names[i] == partner[friend1] && friend1 != names[i]) continue;
		else {
			cout << "bad" << endl;
			return 0;
		}
	}
	cout << "good" << endl;
	
	return 0;
}