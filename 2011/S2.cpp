#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	char a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		char x;
		cin >> x;
		if (x == a[i]) ans++;
	}
	cout << ans << endl;
	return 0;
}