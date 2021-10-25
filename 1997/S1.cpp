#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		vector<string> s, v, o;
		string entry;
		getline(cin, entry);
		for (int i = 0; i < a; ++i) {
			getline(cin, entry);
			s.push_back(entry);
		}
		for (int i = 0; i < b; ++i) {
			getline(cin, entry);
			v.push_back(entry);
		}
		for (int i = 0; i < c; ++i) {
			getline(cin, entry);
			o.push_back(entry);
		}
		vector<string> ans;
		for (int i = 0; i < a; ++i) {
			for (int j = 0; j < b; ++j) {
				for (int k = 0; k < c; ++k) {
					string tmp = s[i] + ' ' + v[j] + ' ' + o[k] + '.';
					ans.push_back(tmp);
				}
			}
		}
		for (auto item: ans) {
			cout << item << "\n";
		}
		cout << "\n";
	}
	
	return 0;
}