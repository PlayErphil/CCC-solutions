#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	string s;
	int ts = 0, ss = 0;
	getline(cin, s);
	while (n--) {
		getline(cin, s);
		for (auto l: s) {
			if (l == 't' || l == 'T') ts++;
			else if (l == 's' || l == 'S') ss++;
		}
	}
	cout << ((ts > ss) ? "English" : "French") << endl;
	
	return 0;
}
