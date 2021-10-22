#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string s;
	int n;
	cin >> s >> n;
	int last = n;
	string ans = s;
	while (s != "Waterloo") {
		if (n < last) {
			ans = s;
			last = n;
		}
		cin >> s >> n;
	}
	cout << ans << endl;
	
	return 0;
}
